uint _ZN5uu_cp23handle_no_preserve_mode17h796a58434a5cfa44E(byte param_1,byte param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0x1b6;
  if ((param_2 & 1) == 0) {
    uVar1 = param_3 & 0x1ff;
  }
  if ((param_1 & 1) != 0) {
    uVar1 = param_3;
  }
  return uVar1;
}