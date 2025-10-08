void _ZN6zoxide5shell1_67__LT_impl_u20_askama__Template_u20_for_u20_zoxide__shell__Xonsh_GT_23render_into_with_values17h4d509fed89ee2704E
               (long *param_1,long *param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 local_40;
  undefined local_38;
  undefined7 uStack_37;
  long local_30;
  long lStack_28;
  
  _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
            (param_3,
             "# pylint: disable=missing-module-docstring\n\nimport builtins  # pylint: disable=unused-import\nimport os\nimport os.path\nimport subprocess\nimport sys\nimport typing\n\nimport xonsh.dirstack  # type: ignore # pylint: disable=import-error\nimport xonsh.environ  # type: ignore # pylint: disable=import-error\n\n"
             ,300);
  local_40 = param_3;
  _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
            (&local_38,
             "# =============================================================================\n#",
             0x51,&local_40);
  lVar3 = CONCAT71(uStack_37,local_38);
  if (lVar3 == 4) {
    _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
              (param_3,
               "\n# Utility functions for zoxide.\n#\n\n\ndef __zoxide_bin() -> str:\n    \"\"\"Finds and returns the location of the zoxide binary.\"\"\"\n    zoxide = typing.cast(str, xonsh.environ.locate_binary(\"zoxide\"))\n    if zoxide is None:\n        zoxide = \"zoxide\"\n    return zoxide\n\n\ndef __zoxide_env() -> dict[str, str]:\n    \"\"\"Returns the current environment.\"\"\"\n    return builtins.__xonsh__.env.detype()  # type: ignore  # pylint:disable=no-member\n\n\ndef __zoxide_pwd() -> str:\n    \"\"\"pwd based on the value of _ZO_RESOLVE_SYMLINKS.\"\"\""
               ,0x207);
    cVar1 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE((long)param_2 + 0x12);
    if (cVar1 == '\0') {
      pcVar5 = 
      "\n    pwd = __zoxide_env().get(\"PWD\")\n    if pwd is None:\n        raise RuntimeError(\"$PWD not found\")"
      ;
      uVar4 = 0x65;
    }
    else {
      pcVar5 = "\n    pwd = os.getcwd()";
      uVar4 = 0x16;
    }
    _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
              (param_3,pcVar5,uVar4);
    _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
              (param_3,
               "\n    return pwd\n\n\ndef __zoxide_cd(path: str | bytes | None = None) -> None:\n    \"\"\"cd + custom logic based on the value of _ZO_ECHO.\"\"\"\n    if path is None:\n        args = []\n    elif isinstance(path, bytes):\n        args = [path.decode(\"utf-8\")]\n    else:\n        args = [path]\n    _, exc, _ = xonsh.dirstack.cd(args)\n    if exc is not None:\n        raise RuntimeError(exc)"
               ,0x176);
    cVar1 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE((long)param_2 + 0x11);
    if (cVar1 != '\0') {
      _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                (param_3,"\n    print(__zoxide_pwd())",0x1a);
    }
    _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
              (param_3,
               "\n\n\nclass ZoxideSilentException(Exception):\n    \"\"\"Exit without complaining.\"\"\"\n\n\ndef __zoxide_errhandler(\n    func: typing.Callable[[list[str]], None],\n) -> typing.Callable[[list[str]], int]:\n    \"\"\"Print exception and exit with error code 1.\"\"\"\n\n    def wrapper(args: list[str]) -> int:\n        try:\n            func(args)\n            return 0\n        except ZoxideSilentException:\n            return 1\n        except Exception as exc:  # pylint: disable=broad-except\n            print(f\"zoxide: {exc}\", file=sys.stderr)\n            return 1\n\n    return wrapper\n\n\n"
               ,0x235);
    local_40 = param_3;
    _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
              (&local_38,
               "# =============================================================================\n#",
               0x51,&local_40);
    lVar3 = CONCAT71(uStack_37,local_38);
    if (lVar3 == 4) {
      _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                (param_3,"\n# Hook configuration for zoxide.\n#\n\n",0x25);
      local_38 = *(char *)(param_2 + 2) == '\0';
      cVar1 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE(&local_38);
      if (cVar1 == '\0') {
        _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                  (param_3,
                   "# Initialize hook to add new entries to the database.\nif \"__zoxide_hook\" not in globals():\n"
                   ,0x5b);
        cVar1 = *(char *)(param_2 + 2);
        local_38 = cVar1 == '\x01';
        cVar2 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE(&local_38);
        if (cVar2 == '\0') {
          local_38 = cVar1 == '\x02';
          cVar1 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE(&local_38);
          if (cVar1 != '\0') {
            pcVar5 = "\n    @builtins.events.on_chdir  # type: ignore  # pylint:disable=no-member";
            uVar4 = 0x4a;
            goto LAB_00199f72;
          }
        }
        else {
          pcVar5 = 
          "\n    @builtins.events.on_post_prompt  # type: ignore  # pylint:disable=no-member";
          uVar4 = 0x50;
LAB_00199f72:
          _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                    (param_3,pcVar5,uVar4);
        }
        _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                  (param_3,
                   "\n    def __zoxide_hook(**_kwargs: typing.Any) -> None:\n        \"\"\"Hook to add new entries to the database.\"\"\"\n        pwd = __zoxide_pwd()\n        zoxide = __zoxide_bin()\n        subprocess.run(\n            [zoxide, \"add\", \"--\", pwd],\n            check=False,\n            env=__zoxide_env(),\n        )\n"
                   ,0x12e);
      }
      else {
        local_40 = param_3;
        _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
                  (&local_38,"# -- not configured --",0x16,&local_40);
        lVar3 = CONCAT71(uStack_37,local_38);
        if (lVar3 != 4) goto LAB_0019a155;
      }
      _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                (param_3,"\n\n",2);
      local_40 = param_3;
      _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
                (&local_38,
                 "# =============================================================================\n#"
                 ,0x51,&local_40);
      lVar3 = CONCAT71(uStack_37,local_38);
      if (lVar3 == 4) {
        _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                  (param_3,
                   "\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n\n@__zoxide_errhandler\ndef __zoxide_z(args: list[str]) -> None:\n    \"\"\"Jump to a directory using only keywords.\"\"\"\n    if args == []:\n        __zoxide_cd()\n    elif args == [\"-\"]:\n        __zoxide_cd(\"-\")\n    elif len(args) == 1 and os.path.isdir(args[0]):\n        __zoxide_cd(args[0])\n    else:\n        try:\n            zoxide = __zoxide_bin()\n            cmd = subprocess.run(\n                [zoxide, \"query\", \"--exclude\", __zoxide_pwd(), \"--\"] + args,\n                check=True,\n                env=__zoxide_env(),\n                stdout=subprocess.PIPE,\n            )\n        except subprocess.CalledProcessError as exc:\n            raise ZoxideSilentException() from exc\n\n        result = cmd.stdout[:-1]\n        __zoxide_cd(result)\n\n\n@__zoxide_errhandler\ndef __zoxide_zi(args: list[str]) -> None:\n    \"\"\"Jump to a directory using interactive search.\"\"\"\n    try:\n        zoxide = __zoxide_bin()\n        cmd = subprocess.run(\n            [zoxide, \"query\", \"-i\", \"--\"] + args,\n            check=True,\n            env=__zoxide_env(),\n            stdout=subprocess.PIPE,\n        )\n    except subprocess.CalledProcessError as exc:\n        raise ZoxideSilentException() from exc\n\n    result = cmd.stdout[:-1]\n    __zoxide_cd(result)\n\n\n"
                   ,0x525);
        local_40 = param_3;
        _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
                  (&local_38,
                   "# =============================================================================\n#"
                   ,0x51,&local_40);
        lVar3 = CONCAT71(uStack_37,local_38);
        if (lVar3 == 4) {
          _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                    (param_3,"\n# Commands for zoxide. Disable these using --no-cmd.\n#",0x37);
          if (*param_2 == 0) {
            _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                      (param_3,"\n\n",2);
            local_40 = param_3;
            _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
                      (&local_38,"# -- not configured --",0x16,&local_40);
            lVar3 = CONCAT71(uStack_37,local_38);
            if (lVar3 == 4) {
LAB_0019a0fb:
              _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                        (param_3,"\n\n",2);
              local_40 = param_3;
              _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
                        (&local_38,
                         "# =============================================================================\n#"
                         ,0x51,&local_40);
              lVar3 = CONCAT71(uStack_37,local_38);
              if (lVar3 == 4) {
                _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                          (param_3,
                           "\n# To initialize zoxide, add this to your configuration (usually ~/.xonshrc):\n#\n# execx($(zoxide init xonsh), \'exec\', __xonsh__.ctx, filename=\'zoxide\')"
                           ,0x97);
                lVar3 = 4;
                goto LAB_0019a15e;
              }
            }
          }
          else {
            _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                      (param_3,"\n\nbuiltins.aliases[\"",0x14);
            local_40 = param_3;
            _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17h9943a0e6cd37435bE
                      (&local_38,param_2,&local_40);
            lVar3 = CONCAT71(uStack_37,local_38);
            if (lVar3 == 4) {
              _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                        (param_3,
                         "\"] = __zoxide_z  # type: ignore  # pylint:disable=no-member\nbuiltins.aliases[\""
                         ,0x4e);
              local_40 = param_3;
              _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17h9943a0e6cd37435bE
                        (&local_38,param_2,&local_40);
              lVar3 = CONCAT71(uStack_37,local_38);
              if (lVar3 == 4) {
                _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                          (param_3,"i\"] = __zoxide_zi  # type: ignore  # pylint:disable=no-member",
                           0x3d);
                goto LAB_0019a0fb;
              }
            }
          }
        }
      }
    }
  }
LAB_0019a155:
  param_1[1] = local_30;
  param_1[2] = lStack_28;
LAB_0019a15e:
  *param_1 = lVar3;
  return;
}