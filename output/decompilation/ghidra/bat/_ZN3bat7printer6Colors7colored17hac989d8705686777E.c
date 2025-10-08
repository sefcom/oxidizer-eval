void _ZN3bat7printer6Colors7colored17hac989d8705686777E
               (undefined8 *param_1,ulong param_2,undefined4 param_3,undefined param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0xee12;
  if ((param_2 & 1) != 0) {
    uVar1 = _ZN3bat8terminal13to_ansi_color17h5249a5ef8d27cb4bE(param_3,param_4);
  }
  *(undefined *)(param_1 + 1) = 0;
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 9) = uVar1;
  *(undefined4 *)((long)param_1 + 0xd) = 0x15;
  *(undefined8 *)((long)param_1 + 0x11) = 0;
  *(undefined *)((long)param_1 + 0x19) = 0;
  *(undefined4 *)((long)param_1 + 0x1a) = uVar1;
  *(undefined4 *)((long)param_1 + 0x1e) = 0x15;
  *(undefined *)((long)param_1 + 0x22) = 1;
  *(undefined8 *)((long)param_1 + 0x23) = 0;
  *(undefined8 *)((long)param_1 + 0x2b) = 0x1500000015;
  *(undefined8 *)((long)param_1 + 0x33) = 0;
  *(undefined *)((long)param_1 + 0x3b) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0x1500000004;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x4d) = 0x1500000002;
  *(undefined8 *)((long)param_1 + 0x55) = 0;
  *(undefined *)((long)param_1 + 0x5d) = 0;
  *(undefined8 *)((long)param_1 + 0x5e) = 0x1500000006;
  *(undefined8 *)((long)param_1 + 0x66) = 0;
  *(undefined *)((long)param_1 + 0x6e) = 0;
  *(undefined4 *)((long)param_1 + 0x6f) = uVar1;
  *(undefined4 *)((long)param_1 + 0x73) = 0x15;
  return;
}