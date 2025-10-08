void _ZN3bat3app3App3new17h327fd37a294c175cE(char *param_1)

{
  char cVar1;
  char local_60;
  undefined7 uStack_5f;
  undefined local_58;
  undefined7 uStack_57;
  undefined uStack_50;
  undefined7 uStack_4f;
  undefined local_48;
  undefined7 uStack_47;
  undefined uStack_40;
  undefined7 uStack_3f;
  undefined local_38;
  undefined7 uStack_37;
  undefined uStack_30;
  undefined7 uStack_2f;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00807998)();
  cVar1 = _ZN3std3sys2io11is_terminal6isatty11is_terminal17he9481b7f77764060E();
  _ZN3bat3app3App7matches17hdbbfdfbdf2b6730cE(&local_60,cVar1);
  if (local_60 == '\r') {
    *(undefined8 *)(param_1 + 0x38) = local_28;
    *(ulong *)(param_1 + 0x28) = CONCAT71(uStack_37,local_38);
    *(ulong *)(param_1 + 0x30) = CONCAT71(uStack_2f,uStack_30);
    *(ulong *)(param_1 + 0x18) = CONCAT71(uStack_47,local_48);
    *(ulong *)(param_1 + 0x20) = CONCAT71(uStack_3f,uStack_40);
    *(ulong *)(param_1 + 8) = CONCAT71(uStack_57,local_58);
    *(ulong *)(param_1 + 0x10) = CONCAT71(uStack_4f,uStack_50);
    param_1[0x40] = cVar1;
  }
  else {
    *(undefined8 *)(param_1 + 0x40) = local_20;
    *(undefined8 *)(param_1 + 0x48) = uStack_18;
    *(ulong *)(param_1 + 0x30) = CONCAT71(uStack_2f,uStack_30);
    *(undefined8 *)(param_1 + 0x38) = local_28;
    *(ulong *)(param_1 + 0x21) = CONCAT17(local_38,uStack_3f);
    *(ulong *)(param_1 + 0x29) = CONCAT17(uStack_30,uStack_37);
    *(ulong *)(param_1 + 0x11) = CONCAT17(local_48,uStack_4f);
    *(ulong *)(param_1 + 0x19) = CONCAT17(uStack_40,uStack_47);
    *(ulong *)(param_1 + 1) = CONCAT17(local_58,uStack_5f);
    *(ulong *)(param_1 + 9) = CONCAT17(uStack_50,uStack_57);
  }
  *param_1 = local_60;
  return;
}