undefined8 _ZN7uu_join5State15get_current_key17hb0aa7b8c555c38dcE(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 in_R9;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_00204d38)
              (0,0,&PTR_DAT_001fe508);
    pcVar2 = (code *)swi(3);
    uVar3 = (*pcVar2)();
    return uVar3;
  }
  lVar1 = *(long *)(param_1 + 8);
  if (*(ulong *)(lVar1 + 0x10) <= *(ulong *)(param_1 + 0x40)) {
    return 0;
  }
  lVar4 = *(ulong *)(param_1 + 0x40) * 0x10;
  uVar3 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h5fa46ece5d44be38E
                    (*(undefined8 *)(*(long *)(lVar1 + 8) + lVar4),
                     *(undefined8 *)(*(long *)(lVar1 + 8) + 8 + lVar4),*(undefined8 *)(lVar1 + 0x20)
                     ,*(undefined8 *)(lVar1 + 0x28),&PTR_DAT_001fe3c8,in_R9,lVar1);
  return uVar3;
}