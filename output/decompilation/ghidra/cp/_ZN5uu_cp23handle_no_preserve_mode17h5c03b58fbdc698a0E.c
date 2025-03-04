uint _ZN5uu_cp23handle_no_preserve_mode17h5c03b58fbdc698a0E(char param_1,char param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0x1b6;
  if (param_2 == '\0') {
    uVar1 = param_3 & 0x1ff;
  }
  if (param_1 != '\0') {
    uVar1 = param_3;
  }
  return uVar1;
}