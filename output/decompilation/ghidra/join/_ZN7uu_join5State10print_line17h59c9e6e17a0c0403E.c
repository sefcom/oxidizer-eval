void _ZN7uu_join5State10print_line17h59c9e6e17a0c0403E
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  long lVar2;
  undefined auVar3 [16];
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (*(long *)(param_4 + 0x10) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    auVar3 = (*(code *)PTR__ZN7uu_join4Line9get_field17h7dd14bed39768627E_00239320)(param_3,uVar1);
    if (auVar3._0_8_ == 0) {
      auVar3 = *(undefined (*) [16])(param_4 + 0x18);
    }
    lVar2 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17hccae4f1a94cdd6f8E
                      (param_2,auVar3._0_8_,auVar3._8_8_);
    if (lVar2 != 0) {
      return;
    }
    lVar2 = _ZN7uu_join15Repr_LT_Sep_GT_12print_fields17h97f24fe6eba7f34cE(param_2,param_3,uVar1);
  }
  else {
    lVar2 = _ZN7uu_join15Repr_LT_Sep_GT_12print_format17hdcf49612cc94556eE(param_4,param_2);
  }
  if (lVar2 == 0) {
    uStack_28 = CONCAT17(*(undefined *)(param_4 + 0x28),(undefined7)uStack_28);
    _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17hccae4f1a94cdd6f8E
              (param_2,(long)&uStack_28 + 7,1);
  }
  return;
}