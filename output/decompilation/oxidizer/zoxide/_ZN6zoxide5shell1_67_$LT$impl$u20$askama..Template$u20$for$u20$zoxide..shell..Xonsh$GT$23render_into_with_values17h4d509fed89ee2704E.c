fn zoxide::shell::_::<impl askama::Template for zoxide::shell::Xonsh>::render_into_with_values(a0: i64, a1: i64, a2: u64) -> long long {
    let v0: core::result::Result<(), core::fmt::Error>;  // [bp-0x40], Other Possible Types: struct8, u64
    let v1: core::result::Result<(), core::fmt::Error>;  // [bp-0x38], Other Possible Types: struct8
    let v2: struct8;  // [bp-0x38]
    let v3: i8;  // [bp-0x30]
    let v5: core::result::Result<(), core::fmt::Error>;  // rax
    let v6: core::result::Result<(), core::fmt::Error>;  // rsi
    let v7: core::result::Result<(), core::fmt::Error>;  // rdx
    let v8: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // rsi
    let v9: core::result::Result<(), core::fmt::Error>;  // rdx
    let v11: u64;  // rax
    let v12: core::result::Result<(), core::fmt::Error>;  // rax
    let v13: core::result::Result<(), core::fmt::Error>;  // rax
    let v14: core::result::Result<(), core::fmt::Error>;  // rax
    let v15: core::result::Result<(), core::fmt::Error>;  // rax
    let v16: core::result::Result<(), core::fmt::Error>;  // rax
    let v17: core::result::Result<(), core::fmt::Error>;  // rax
    let v18: core::result::Result<(), core::fmt::Error>;  // rax
    let v19: core::result::Result<(), core::fmt::Error>;  // rax
    let v20: core::result::Result<(), core::fmt::Error>;  // rax
    let v21: core::result::Result<(), core::fmt::Error>;  // rax
    let v22: core::result::Result<(), core::fmt::Error>;  // rax
    let v23: core::result::Result<(), core::fmt::Error>;  // rax
    let v24: core::result::Result<(), core::fmt::Error>;  // rax
    let v25: core::result::Result<(), core::fmt::Error>;  // rax
    let v26: core::result::Result<(), core::fmt::Error>;  // rax
    let v27: core::result::Result<(), core::fmt::Error>;  // rax
    let v28: core::result::Result<(), core::fmt::Error>;  // rax
    let v29: core::result::Result<(), core::fmt::Error>;  // rax
    let v30: core::result::Result<(), core::fmt::Error>;  // rax

    v13 = <alloc::string::String as core::fmt::Write>::write_str(a2, "# pylint: disable=missing-module-docstring\n\nimport builtins  # pylint: disable=unused-import\nimport os\nimport os.path\nimport subprocess\nimport sys\nimport typing\n\nimport xonsh.dirstack  # type: ignore # pylint: disable=import-error\nimport xonsh.environ  # type: ignore # pylint: disable=import-error\n\n") as u64;
    v0 = a2;
    v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
    v5 = v1.field_0;
    if v1.field_0 != 4 {
        return struct24 {
            field_0: v11
            field_8: *(&v3 as &i128)
        };
    }
    v23 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# Utility functions for zoxide.\n#\n\n\ndef __zoxide_bin() -> str:\n    \"\"\"Finds and returns the location of the zoxide binary.\"\"\"\n    zoxide = typing.cast(str, xonsh.environ.locate_binary(\"zoxide\"))\n    if zoxide is None:\n        zoxide = \"zoxide\"\n    return zoxide\n\n\ndef __zoxide_env() -> dict[str, str]:\n    \"\"\"Returns the current environment.\"\"\"\n    return builtins.__xonsh__.env.detype()  # type: ignore  # pylint:disable=no-member\n\n\ndef __zoxide_pwd() -> str:\n    \"\"\"pwd based on the value of _ZO_RESOLVE_SYMLINKS.\"\"\"") as u64;
    v26 = <alloc::string::String as core::fmt::Write>::write_str(a2, v6, v7) as u64;
    v29 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n    return pwd\n\n\ndef __zoxide_cd(path: str | bytes | None = None) -> None:\n    \"\"\"cd + custom logic based on the value of _ZO_ECHO.\"\"\"\n    if path is None:\n        args = []\n    elif isinstance(path, bytes):\n        args = [path.decode(\"utf-8\")]\n    else:\n        args = [path]\n    _, exc, _ = xonsh.dirstack.cd(args)\n    if exc is not None:\n        raise RuntimeError(exc)") as u64;
    if askama::helpers::as_bool(a1 + 17) {
        v25 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n    print(__zoxide_pwd())") as u64;
    }
    v18 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n\nclass ZoxideSilentException(Exception):\n    \"\"\"Exit without complaining.\"\"\"\n\n\ndef __zoxide_errhandler(\n    func: typing.Callable[[list[str]], None],\n) -> typing.Callable[[list[str]], int]:\n    \"\"\"Print exception and exit with error code 1.\"\"\"\n\n    def wrapper(args: list[str]) -> int:\n        try:\n            func(args)\n            return 0\n        except ZoxideSilentException:\n            return 1\n        except Exception as exc:  # pylint: disable=broad-except\n            print(f\"zoxide: {exc}\", file=sys.stderr)\n            return 1\n\n    return wrapper\n\n\n") as u64;
    v0 = a2;
    v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
    v5 = v1.field_0;
    if v1.field_0 == 4 {
        v28 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# Hook configuration for zoxide.\n#\n\n") as u64;
        v1 = !*((a1 + 16) as &i8);
        if askama::helpers::as_bool(&v1) {
            v0 = a2;
            v2 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# -- not configured --", &v0);
            v5 = v2.field_0;
            if v2.field_0 == 4 {
                goto LABEL_499f8e;
            }
        } else {
            v20 = <alloc::string::String as core::fmt::Write>::write_str(a2, "# Initialize hook to add new entries to the database.\nif \"__zoxide_hook\" not in globals():\n") as u64;
            v1 = *((a1 + 16) as &i8) == 1;
            if !askama::helpers::as_bool(&v1) {
                v1 = *((a1 + 16) as &i8) == 2;
                if !askama::helpers::as_bool(&v1) {
                    goto LABEL_499f7a;
                }
            }
            v21 = <alloc::string::String as core::fmt::Write>::write_str(a2, v8, v9) as u64;
LABEL_499f7a:
            v27 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n    def __zoxide_hook(**_kwargs: typing.Any) -> None:\n        \"\"\"Hook to add new entries to the database.\"\"\"\n        pwd = __zoxide_pwd()\n        zoxide = __zoxide_bin()\n        subprocess.run(\n            [zoxide, \"add\", \"--\", pwd],\n            check=False,\n            env=__zoxide_env(),\n        )\n") as u64;
LABEL_499f8e:
            v15 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n") as u64;
            v0 = a2;
            v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
            v5 = v1.field_0;
            if v1.field_0 == 4 {
                v14 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n\n@__zoxide_errhandler\ndef __zoxide_z(args: list[str]) -> None:\n    \"\"\"Jump to a directory using only keywords.\"\"\"\n    if args == []:\n        __zoxide_cd()\n    elif args == [\"-\"]:\n        __zoxide_cd(\"-\")\n    elif len(args) == 1 and os.path.isdir(args[0]):\n        __zoxide_cd(args[0])\n    else:\n        try:\n            zoxide = __zoxide_bin()\n            cmd = subprocess.run(\n                [zoxide, \"query\", \"--exclude\", __zoxide_pwd(), \"--\"] + args,\n                check=True,\n                env=__zoxide_env(),\n                stdout=subprocess.PIPE,\n            )\n        except subprocess.CalledProcessError as exc:\n            raise ZoxideSilentException() from exc\n\n        result = cmd.stdout[:-1]\n        __zoxide_cd(result)\n\n\n@__zoxide_errhandler\ndef __zoxide_zi(args: list[str]) -> None:\n    \"\"\"Jump to a directory using interactive search.\"\"\"\n    try:\n        zoxide = __zoxide_bin()\n        cmd = subprocess.run(\n            [zoxide, \"query\", \"-i\", \"--\"] + args,\n            check=True,\n            env=__zoxide_env(),\n            stdout=subprocess.PIPE,\n        )\n    except subprocess.CalledProcessError as exc:\n        raise ZoxideSilentException() from exc\n\n    result = cmd.stdout[:-1]\n    __zoxide_cd(result)\n\n\n") as u64;
                v0 = a2;
                v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
                v5 = v1.field_0;
                if v1.field_0 == 4 {
                    v19 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# Commands for zoxide. Disable these using --no-cmd.\n#") as u64;
                    if *(a1 as &i64) {
                        v12 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\nbuiltins.aliases[\"") as u64;
                        v0 = a2;
                        v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into(a1, &v0);
                        v5 = v1.field_0;
                        if v1.field_0 == 4 {
                            v22 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\"] = __zoxide_z  # type: ignore  # pylint:disable=no-member\nbuiltins.aliases[\"") as u64;
                            v0 = a2;
                            v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into(a1, &v0);
                            v5 = v1.field_0;
                            if v1.field_0 == 4 {
                                v16 = <alloc::string::String as core::fmt::Write>::write_str(a2, "i\"] = __zoxide_zi  # type: ignore  # pylint:disable=no-member") as u64;
                                goto LABEL_49a0fb;
                            }
                        }
                    } else {
                        v24 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n") as u64;
                        v0 = a2;
                        v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# -- not configured --", &v0);
                        v5 = v1.field_0;
                        if v1.field_0 == 4 {
LABEL_49a0fb:
                            v30 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n") as u64;
                            v0 = a2;
                            v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
                            v5 = v1.field_0;
                            if v1.field_0 == 4 {
                                v17 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# To initialize zoxide, add this to your configuration (usually ~/.xonshrc):\n#\n# execx($(zoxide init xonsh), 'exec', __xonsh__.ctx, filename='zoxide')") as u64;
                            }
                        }
                    }
                }
            }
        }
    }
    return struct24 {
        field_0: v11
        field_8: *(&v3 as &i128)
    };
}
