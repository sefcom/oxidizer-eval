int _ZN2rg5flags6hiargs15BinaryDetection13from_low_args17h6e6bee379070ab5dE
              (byte param_1,char param_2)

{
  int iVar1;
  
  iVar1 = (uint)(param_2 == '\x01') * 0x10000 + 0x10002;
  if ((param_1 & 1) != 0) {
    iVar1 = 0;
  }
  if (param_2 == '\x02') {
    iVar1 = 0;
  }
  return iVar1;
}