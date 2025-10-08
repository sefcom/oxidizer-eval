void _ZN18alacritty_terminal4term4cell4Cell13set_hyperlink17h2e37a05d1a70fb81E
               (long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long local_20;
  long local_18;
  
  local_20 = param_2;
  if ((param_2 == 0) &&
     ((lVar2 = *param_1, lVar2 == 0 ||
      ((*(long *)(lVar2 + 0x20) == 0 && (*(char *)(lVar2 + 0x30) == '\x03')))))) {
    _ZN4core3ptr114drop_in_place_LT_core__option__Option_LT_alloc__sync__Arc_LT_alacritty_terminal__term__cell__CellExtra_GT__GT__GT_17hf413cccff2c262a4E
              (param_1);
    *param_1 = 0;
    _ZN4core3ptr90drop_in_place_LT_core__option__Option_LT_alacritty_terminal__term__cell__Hyperlink_GT__GT_17h66f3a51a1b2347fbE
              (&local_20);
    return;
  }
                    /* try { // try from 006bdc37 to 006bdc3b has its CatchHandler @ 006bdcba */
  uVar1 = _ZN68__LT_alloc__sync__Arc_LT_T_GT__u20_as_u20_core__default__Default_GT_7default17h2e8909fcdb9d2bb7E
                    ();
  _ZN4core6option15Option_LT_T_GT_18get_or_insert_with17h59e35f958d1e08efE(param_1,uVar1);
  local_18 = param_2;
                    /* try { // try from 006bdc4c to 006bdc53 has its CatchHandler @ 006bdca5 */
  lVar2 = _ZN5alloc4sync16Arc_LT_T_C_A_GT_8make_mut17hd1b9ba4e0192b0c5E(param_1);
  _ZN4core3ptr90drop_in_place_LT_core__option__Option_LT_alacritty_terminal__term__cell__Hyperlink_GT__GT_17h66f3a51a1b2347fbE
            (lVar2 + 0x18);
  *(long *)(lVar2 + 0x18) = param_2;
  return;
}