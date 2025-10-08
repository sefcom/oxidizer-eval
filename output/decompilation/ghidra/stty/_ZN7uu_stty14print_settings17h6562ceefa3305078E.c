undefined8 _ZN7uu_stty14print_settings17h6562ceefa3305078E(undefined8 param_1,long param_2)

{
  undefined uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 0x29) == '\0') {
    uVar2 = _ZN7uu_stty19print_terminal_size17h7d50ec96cc45cfabE(param_1);
    if ((int)uVar2 != 0x86) {
      return uVar2;
    }
    uVar1 = *(undefined *)(param_2 + 0x28);
    uVar2 = _ZN7uu_stty19print_control_chars17hed7af0204ba7e7a6E(param_1,uVar1);
    if ((int)uVar2 != 0x86) {
      return uVar2;
    }
    _ZN7uu_stty11print_flags17h1fca9bc374a8d8a1E(param_1,uVar1);
    _ZN7uu_stty11print_flags17hd79b05057be6f5deE(param_1,uVar1);
    _ZN7uu_stty11print_flags17h9ad0f8fc257d533cE(param_1,uVar1);
    _ZN7uu_stty11print_flags17h6b44033c083706a8E(param_1,uVar1);
  }
  else {
    _ZN7uu_stty20print_in_save_format17he259ed46e6739654E(param_1);
  }
  return 0x86;
}