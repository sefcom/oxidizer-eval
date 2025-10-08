ulong * _ZN18alacritty_terminal3tty4unix3new17h458246f558c81da7E
                  (ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  
  local_20 = (short)param_3;
  local_1a = (short)((ulong)param_3 >> 0x30) * local_20;
  local_1e = (short)((ulong)param_3 >> 0x10);
  local_1c = (short)((ulong)param_3 >> 0x20) * local_1e;
  uVar1 = (*(code *)PTR__ZN14rustix_openpty7openpty17h61b8c6016be8c22dE_009e1488)(0,&local_20);
  if ((int)uVar1 == -1) {
    *param_1 = (ulong)(uint)-(int)(short)(uVar1 >> 0x20) << 0x20 | 2;
    *(undefined4 *)(param_1 + 4) = 2;
  }
  else {
    (*(code *)PTR__ZN18alacritty_terminal3tty4unix7from_fd17h7c2d58da34abf93dE_009e1490)
              (param_1,param_2,param_4,uVar1 & 0xffffffff);
  }
  return param_1;
}