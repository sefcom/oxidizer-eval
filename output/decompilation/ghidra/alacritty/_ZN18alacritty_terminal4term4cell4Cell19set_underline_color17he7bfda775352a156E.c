void _ZN18alacritty_terminal4term4cell4Cell19set_underline_color17he7bfda775352a156E
               (long *param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  
  if (((char)param_2 == '\x03') &&
     ((lVar2 = *param_1, lVar2 == 0 ||
      ((*(long *)(lVar2 + 0x20) == 0 && (*(long *)(lVar2 + 0x28) == 0)))))) {
    _ZN4core3ptr114drop_in_place_LT_core__option__Option_LT_alloc__sync__Arc_LT_alacritty_terminal__term__cell__CellExtra_GT__GT__GT_17hf413cccff2c262a4E
              (param_1);
    *param_1 = 0;
    return;
  }
  uVar3 = param_2 >> 8 & 0xffffff;
  uVar1 = _ZN68__LT_alloc__sync__Arc_LT_T_GT__u20_as_u20_core__default__Default_GT_7default17h2e8909fcdb9d2bb7E
                    ();
  _ZN4core6option15Option_LT_T_GT_18get_or_insert_with17h59e35f958d1e08efE(param_1,uVar1);
  lVar2 = _ZN5alloc4sync16Arc_LT_T_C_A_GT_8make_mut17hd1b9ba4e0192b0c5E(param_1);
  *(char *)(lVar2 + 0x20) = (char)param_2;
  *(char *)(lVar2 + 0x23) = (char)(uVar3 >> 0x10);
  *(short *)(lVar2 + 0x21) = (short)uVar3;
  return;
}