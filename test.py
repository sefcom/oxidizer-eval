from pathlib import Path
from eval.metrics.mcc import measure_mcc_c

code = """
void uu_fmt::extract_files(struct_1 *a0, unsigned long long a1)
{
    if (a1 == 0) {
        printf();
        return 0;
    }
    printf();
}
"""

if __name__ == "__main__":
    print(measure_mcc_c(code))
