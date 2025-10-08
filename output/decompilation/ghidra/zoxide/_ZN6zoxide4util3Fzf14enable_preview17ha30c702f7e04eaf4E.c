undefined8 _ZN6zoxide4util3Fzf14enable_preview17ha30c702f7e04eaf4E(undefined8 param_1)

{
  char *local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  char *local_18;
  undefined8 local_10;
  
  local_68 = "--preview=\\command -p ls -Cp --color=always --group-directories-first {2..}";
  local_60 = 0x4b;
  local_58 = "--preview-window=down,30%,sharp";
  local_50 = 0x1f;
  _ZN3std7process7Command4args17h56573216b8616865E(param_1,&local_68);
  local_68 = "CLICOLOR";
  local_60 = 8;
  local_58 = "1";
  local_50 = 1;
  local_48 = "CLICOLOR_FORCE";
  local_40 = 0xe;
  local_38 = "1";
  local_30 = 1;
  local_28 = "SHELL";
  local_20 = 5;
  local_18 = "sh";
  local_10 = 2;
  _ZN3std7process7Command4envs17hb62d3be772b32b91E(param_1,&local_68);
  return param_1;
}