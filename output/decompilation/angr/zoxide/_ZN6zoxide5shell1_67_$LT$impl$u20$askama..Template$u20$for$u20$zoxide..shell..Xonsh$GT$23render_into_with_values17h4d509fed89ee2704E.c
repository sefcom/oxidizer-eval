long long zoxide::shell::_::<impl askama::Template for zoxide::shell::Xonsh>::render_into_with_values(struct_0 *a0, struct_1 *a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x40]
    char v1;  // [sp-0x38]
    char v2;  // [bp-0x30]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rsi
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rsi
    unsigned long long v8;  // rdx

    a2.write_str("# pylint: disable=missing-module-docstring\n\nimport builtins  # pylint: disable=unused-import\nimport os\nimport os.path\nimport subprocess\nimport sys\nimport typing\n\nimport xonsh.dirstack  # type: ignore # pylint: disable=import-error\nimport xonsh.environ  # type: ignore # pylint: disable=import-error\n\n", 300);
    v0 = a2;
    v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
    v4 = *((long long *)&v1);
    if (*((long long *)&v1) == 4)
    {
        a2.write_str("\n# Utility functions for zoxide.\n#\n\n\ndef __zoxide_bin() -> str:\n    \"\"\"Finds and returns the location of the zoxide binary.\"\"\"\n    zoxide = typing.cast(str, xonsh.environ.locate_binary(\"zoxide\"))\n    if zoxide is None:\n        zoxide = \"zoxide\"\n    return zoxide\n\n\ndef __zoxide_env() -> dict[str, str]:\n    \"\"\"Returns the current environment.\"\"\"\n    return builtins.__xonsh__.env.detype()  # type: ignore  # pylint:disable=no-member\n\n\ndef __zoxide_pwd() -> str:\n    \"\"\"pwd based on the value of _ZO_RESOLVE_SYMLINKS.\"\"\"", 519);
        if ((char)askama::helpers::as_bool((char *)&a1[1].field_0 + 1))
        {
            v5 = "\n    pwd = os.getcwd()\n    return pwd\n\n\ndef __zoxide_cd(path: str | bytes | None = None) -> None:\n    \"\"\"cd + custom logic based on the value of _ZO_ECHO.\"\"\"\n    if path is None:\n        args = []\n    elif isinstance(path, bytes):\n        args = [path.deco";
            v6 = 22;
        }
        else
        {
            v5 = "\n    pwd = __zoxide_env().get(\"PWD\")\n    if pwd is None:\n        raise RuntimeError(\"$PWD not found\")\n    pwd = os.getcwd()\n    return pwd\n\n\ndef __zoxide_cd(path: str | bytes | None = None) -> None:\n    \"\"\"cd + custom logic based on the value of _ZO_ECHO.\"";
            v6 = 101;
        }
        a2.write_str(v5, v6);
        a2.write_str("\n    return pwd\n\n\ndef __zoxide_cd(path: str | bytes | None = None) -> None:\n    \"\"\"cd + custom logic based on the value of _ZO_ECHO.\"\"\"\n    if path is None:\n        args = []\n    elif isinstance(path, bytes):\n        args = [path.decode(\"utf-8\")]\n    else:\n        args = [path]\n    _, exc, _ = xonsh.dirstack.cd(args)\n    if exc is not None:\n        raise RuntimeError(exc)", 374);
        if ((char)askama::helpers::as_bool(a1 + 1))
            a2.write_str("\n    print(__zoxide_pwd())\n\n\nclass ZoxideSilentException(Exception):\n    \"\"\"Exit without complaining.\"\"\"\n\n\ndef __zoxide_errhandler(\n    func: typing.Callable[[list[str]], None],\n) -> typing.Callable[[list[str]], int]:\n    \"\"\"Print exception and exit with e", 26);
        a2.write_str("\n\n\nclass ZoxideSilentException(Exception):\n    \"\"\"Exit without complaining.\"\"\"\n\n\ndef __zoxide_errhandler(\n    func: typing.Callable[[list[str]], None],\n) -> typing.Callable[[list[str]], int]:\n    \"\"\"Print exception and exit with error code 1.\"\"\"\n\n    def wrapper(args: list[str]) -> int:\n        try:\n            func(args)\n            return 0\n        except ZoxideSilentException:\n            return 1\n        except Exception as exc:  # pylint: disable=broad-except\n            print(f\"zoxide: {exc}\", file=sys.stderr)\n            return 1\n\n    return wrapper\n\n\n", 565);
        v0 = a2;
        v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
        v4 = *((long long *)&v1);
        if (*((long long *)&v1) == 4)
        {
            a2.write_str("\n# Hook configuration for zoxide.\n#\n\n# Initialize hook to add new entries to the database.\nfunction __zoxide_hook --on-variable PWD\nfunction __zoxide_hook --on-event fish_prompt\n    test -z \"$fish_private_mode\"\n    and command zoxide add -- (__zoxide_pwd)\n", 37);
            v1 = !a1->field_10;
            if ((char)askama::helpers::as_bool(&v1))
            {
                v0 = a2;
                v1.write_into("# -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd -L\n    \\builtin pwd -P\n    \\command cygpath -w \"$(\\builtin pwd -P)\"\n}\n\n# cd + cu", 22, &v0);
                v4 = *((long long *)&v1);
                if (*((long long *)&v1) == 4)
                    goto LABEL_499f8e;
            }
            else
            {
                a2.write_str("# Initialize hook to add new entries to the database.\nif \"__zoxide_hook\" not in globals():\n\n    @builtins.events.on_chdir  # type: ignore  # pylint:disable=no-member\n    @builtins.events.on_post_prompt  # type: ignore  # pylint:disable=no-member\n    def __", 91);
                v1 = a1->field_10 == 1;
                if ((char)askama::helpers::as_bool(&v1))
                {
                    v7 = "\n    @builtins.events.on_post_prompt  # type: ignore  # pylint:disable=no-member\n    def __zoxide_hook(**_kwargs: typing.Any) -> None:\n        \"\"\"Hook to add new entries to the database.\"\"\"\n        pwd = __zoxide_pwd()\n        zoxide = __zoxide_bin()\n     ";
                    v8 = 80;
                }
                else
                {
                    v1 = a1->field_10 == 2;
                    if (!(char)askama::helpers::as_bool(&v1))
                        goto LABEL_499f7a;
                    v7 = "\n    @builtins.events.on_chdir  # type: ignore  # pylint:disable=no-member\n    @builtins.events.on_post_prompt  # type: ignore  # pylint:disable=no-member\n    def __zoxide_hook(**_kwargs: typing.Any) -> None:\n        \"\"\"Hook to add new entries to the datab";
                    v8 = 74;
                }
                a2.write_str(v7, v8);
LABEL_499f7a:
                a2.write_str("\n    def __zoxide_hook(**_kwargs: typing.Any) -> None:\n        \"\"\"Hook to add new entries to the database.\"\"\"\n        pwd = __zoxide_pwd()\n        zoxide = __zoxide_bin()\n        subprocess.run(\n            [zoxide, \"add\", \"--\", pwd],\n            check=False,\n            env=__zoxide_env(),\n        )\n", 302);
LABEL_499f8e:
                a2.write_str("\n\n\n\n\\builtin unalias  &>/dev/null || \\builtin true\nfunction () {\n    __zoxide_z \"$@\"\n}\n\n\\builtin unalias i &>/dev/null || \\builtin true\nfunction i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Bash 4.4+ is required to use `@Q`.\n# - Completions requir", 2);
                v0 = a2;
                v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
                v4 = *((long long *)&v1);
                if (*((long long *)&v1) == 4)
                {
                    a2.write_str("\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n\n@__zoxide_errhandler\ndef __zoxide_z(args: list[str]) -> None:\n    \"\"\"Jump to a directory using only keywords.\"\"\"\n    if args == []:\n        __zoxide_cd()\n    elif args == [\"-\"]:\n        __zoxide_cd(\"-\")\n    elif len(args) == 1 and os.path.isdir(args[0]):\n        __zoxide_cd(args[0])\n    else:\n        try:\n            zoxide = __zoxide_bin()\n            cmd = subprocess.run(\n                [zoxide, \"query\", \"--exclude\", __zoxide_pwd(), \"--\"] + args,\n                check=True,\n                env=__zoxide_env(),\n                stdout=subprocess.PIPE,\n            )\n        except subprocess.CalledProcessError as exc:\n            raise ZoxideSilentException() from exc\n\n        result = cmd.stdout[:-1]\n        __zoxide_cd(result)\n\n\n@__zoxide_errhandler\ndef __zoxide_zi(args: list[str]) -> None:\n    \"\"\"Jump to a directory using interactive search.\"\"\"\n    try:\n        zoxide = __zoxide_bin()\n        cmd = subprocess.run(\n           ", 1317);
                    v0 = a2;
                    v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
                    v4 = *((long long *)&v1);
                    if (*((long long *)&v1) == 4)
                    {
                        a2.write_str("\n# Commands for zoxide. Disable these using --no-cmd.\n#\n\n\n\n\\builtin unalias  &>/dev/null || \\builtin true\nfunction () {\n    __zoxide_z \"$@\"\n}\n\n\\builtin unalias i &>/dev/null || \\builtin true\nfunction i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Ba", 55);
                        if (a1->field_0)
                        {
                            a2.write_str("\n\nbuiltins.aliases[\"\"] = __zoxide_z  # type: ignore  # pylint:disable=no-member\nbuiltins.aliases[\"i\"] = __zoxide_zi  # type: ignore  # pylint:disable=no-member\n# To initialize zoxide, add this to your configuration (usually ~/.xonshrc):\n#\n# execx($(zoxide ", 20);
                            v0 = a2;
                            v1.write_into(a1, &v0);
                            v4 = *((long long *)&v1);
                            if (*((long long *)&v1) == 4)
                            {
                                a2.write_str("\"] = __zoxide_z  # type: ignore  # pylint:disable=no-member\nbuiltins.aliases[\"i\"] = __zoxide_zi  # type: ignore  # pylint:disable=no-member\n# To initialize zoxide, add this to your configuration (usually ~/.xonshrc):\n#\n# execx($(zoxide init xonsh), \'exec\',", 78);
                                v0 = a2;
                                v1.write_into(a1, &v0);
                                v4 = *((long long *)&v1);
                                if (*((long long *)&v1) == 4)
                                {
                                    a2.write_str("i\"] = __zoxide_zi  # type: ignore  # pylint:disable=no-member\n# To initialize zoxide, add this to your configuration (usually ~/.xonshrc):\n#\n# execx($(zoxide init xonsh), \'exec\', __xonsh__.ctx, filename=\'zoxide\')cd\n# Hook configuration for zoxide.\n#\n\n# Hoo", 61);
                                    goto LABEL_49a0fb;
                                }
                            }
                        }
                        else
                        {
                            a2.write_str("\n\n\n\n\\builtin unalias  &>/dev/null || \\builtin true\nfunction () {\n    __zoxide_z \"$@\"\n}\n\n\\builtin unalias i &>/dev/null || \\builtin true\nfunction i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Bash 4.4+ is required to use `@Q`.\n# - Completions requir", 2);
                            v0 = a2;
                            v1.write_into("# -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd -L\n    \\builtin pwd -P\n    \\command cygpath -w \"$(\\builtin pwd -P)\"\n}\n\n# cd + cu", 22, &v0);
                            v4 = *((long long *)&v1);
                            if (*((long long *)&v1) == 4)
                            {
LABEL_49a0fb:
                                a2.write_str("\n\n\n\n\\builtin unalias  &>/dev/null || \\builtin true\nfunction () {\n    __zoxide_z \"$@\"\n}\n\n\\builtin unalias i &>/dev/null || \\builtin true\nfunction i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Bash 4.4+ is required to use `@Q`.\n# - Completions requir", 2);
                                v0 = a2;
                                v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
                                v4 = *((long long *)&v1);
                                if (*((long long *)&v1) == 4)
                                {
                                    a2.write_str("\n# To initialize zoxide, add this to your configuration (usually ~/.xonshrc):\n#\n# execx($(zoxide init xonsh), 'exec', __xonsh__.ctx, filename='zoxide')cd\n# Hook configuration for zoxide.\n#\n\n# Hook to add new entries to the database.\nfunction __zoxide_hook(", 151);
                                    a0->field_0 = 4;
                                    return 4;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v2);
    a0->field_0 = v4;
    return v4;
}
