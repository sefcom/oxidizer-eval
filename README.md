# Oxidizer-Eval

Evaluation framework for [Oxidizer](https://github.com/sefcom/oxidizer), a Rust decompiler built on top of [angr](https://github.com/angr/angr). This framework benchmarks Oxidizer against state-of-the-art decompilers on real-world Rust binaries, measuring conciseness, fidelity, and type recovery.

## Publication

**Oxidizer: Toward Concise and High-fidelity Rust Decompilation**
Yibo Liu, Zion Leonahenahe Basque, Arvind S. Raj, Chavin Udomwongsa, Chang Zhu, Jie Hu, Changyu Zhao, Fangzhou Dong, Adam Doupe, Tiffany Bao, Yan Shoshitaishvili, Ruoyu Wang
*IEEE Symposium on Security and Privacy (S&P), 2026*. (To appear)

```bibtex
@inproceedings{liu2026oxidizer,
  title={Oxidizer: Toward Concise and High-fidelity Rust Decompilation},
  author={Liu, Yibo and Basque, Zion Leonahenahe and Raj, Arvind S and Udomwongsa, Chavin and Zhu, Chang and Hu, Jie and Zhao, Changyu and Dong, Fangzhou and Doup{\'e}, Adam and Bao, Tiffany and Shoshitaishvili, Yan and Wang, Ruoyu},
  booktitle={2026 IEEE Symposium on Security and Privacy (SP)},
  year={2026},
  organization={IEEE}
}
```

## Decompilers

The framework currently evaluates the following decompilers:

| Decompiler | Type | Notes |
|---|---|---|
| **Oxidizer** | Open-source | Rust-oriented decompiler built on top of angr |
| **angr** | Open-source | Vanilla angr |
| **IDA Pro 9.0** | Commercial | Hex-Rays decompiler |
| **Ghidra 11.2.1** | Open-source | NSA's reverse engineering framework |
| **Binary Ninja 5.3.9117-dev** | Commercial | C and Pseudo-Rust output modes |

## Evaluation Targets

Targets are defined in `misc/targets-nightly-2025-05-22.toml`. The current benchmark suite includes 28 real-world Rust projects:

| Target | Description |
|---|---|
| rustdesk | Remote desktop software |
| uv, ruff | Astral Python tooling |
| sway, fuel-core, fuels-rs | Fuel Labs blockchain ecosystem |
| alacritty | GPU-accelerated terminal |
| meilisearch | Search engine |
| ripgrep, fd, bat | CLI utilities |
| starship | Cross-shell prompt |
| helix, lapce | Text editors |
| nushell, fish-shell | Shells |
| typst | Typesetting system |
| vaultwarden | Bitwarden server |
| firecracker | MicroVM |
| influxdb | Time-series database |
| surrealdb | Multi-model database |
| turborepo, swc | JavaScript tooling |
| sniffnet, zoxide, just | Various utilities |
| linera-protocol | Blockchain protocol |
| coreutils | 102 GNU coreutils reimplemented in Rust |

Each target is compiled at multiple optimization levels (O0-O3, Os, Oz) and stripped before decompilation.

## Metrics

### Conciseness
- **CC** -- Cyclomatic Complexity
- **LoC** -- Lines of Code
- **# Variables** -- Number of unique variables
- **# Operators** -- Number of operators

### Fidelity
- **# Gotos** -- Unstructured control flow (lower is better)
- **# Matched String Literals** -- Recovered string constants
- **# Matched Function Calls** -- Correctly identified function calls
- **# Extraneous Function Calls** -- Extraneous function calls
- **# Matched Macro Calls** -- Correctly identified Rust macro calls (e.g., `println!`, `format!`)

### Type Recovery
- Per-type precision/recall/F1 for primitives, structs, enums, Rust-specific types (`Option`, `Result`), and pointer variants

## Project Structure

```
oxidizer-eval/
  eval.py                     # Main evaluation entry point
  config.yml                  # Runtime config (decompilers, timeouts, paths)
  eval/
    config.py                 # Configuration (decompiler list, paths, targets)
    result.py                 # Data structures (DecompileResult, EvalResult)
    decompilers/              # Decompiler adapters (unified interface)
    metrics/                  # Metric definitions and calculations
    utils/                    # Timeout, scheduling, logging
  misc/
    ground_truth_parser/      # Rust tool: extracts ground truth from source
    dwarf_parser/             # Rust tool: extracts DWARF info
    targets-*.toml            # Target definitions per toolchain
  scripts/                    # Analysis, comparison, and utility scripts
```

## Setup

### Prerequisites
- Python >= 3.10
- Rust nightly toolchain (nightly-2025-05-22)
- Install Binary Ninja and its APIs
- External decompilers placed in `tools/` (IDA Pro, Ghidra)

### Install Oxidizer

See instructions at [Oxidizer](https://github.com/sefcom/oxidizer).

### Download Evaluation Targets


## Usage

### Run Evaluation

```bash
python eval.py [targets] [--workers N]
```

| Argument | Default | Description |
|---|---|---|
| `targets` | `all` | Which targets to decompile: `all`, `coreutils`, or a specific binary name (e.g. `fmt`) |
| `--workers N` | `16` | Number of worker processes (`<=0` to disable multiprocessing) |

The evaluation pipeline:
1. Loads target functions from ground truth
2. Schedules decompilation tasks across all binary/decompiler combinations
3. Runs decompilers in parallel with configurable timeouts and memory limits
4. Computes metrics by comparing outputs against ground truth
5. Generates HTML reports and LaTeX tables

Results are saved to `output/result/<tag>/<decompiler>/<binary>/`.

### Configuration

Edit `config.yml` to configure which decompilers to run, per-decompiler timeouts and caching behavior, and tool paths.

Additional constants (e.g., coreutils module list) can be adjusted in `eval/config.py`.