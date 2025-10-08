void _ZN6zoxide2db3dir1_73__LT_impl_u20_serde__de__Deserialize_u20_for_u20_zoxide__db__dir__Dir_GT_11deserialize17h5e22f7d45f241365E
               (long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  uStack_20 = 3;
  uStack_28 = param_2;
  _ZN5serde2de9SeqAccess12next_element17h3b4e276667589b30E(&lStack_40,&uStack_28);
  if (lStack_40 != -0x7ffffffffffffffe) {
    if (lStack_40 != -0x7fffffffffffffff) {
      _ZN5serde2de9SeqAccess12next_element17ha559628f659db80fE(&uStack_50,&uStack_28);
      if (uStack_50 != 2) {
        if ((uStack_50 & 1) == 0) {
          uVar1 = 1;
        }
        else {
          lStack_18 = lStack_48;
          _ZN5serde2de9SeqAccess12next_element17h68b1ab5dc724e512E(&uStack_50,&uStack_28);
          if (uStack_50 == 2) goto LAB_00197d5d;
          if ((uStack_50 & 1) != 0) {
            param_1[2] = lStack_30;
            *param_1 = lStack_40;
            param_1[1] = lStack_38;
            param_1[3] = lStack_18;
            param_1[4] = lStack_48;
            return;
          }
          uVar1 = 2;
        }
        lStack_48 = _ZN5serde2de5Error14invalid_length17h422b069e7e7d7720E(uVar1);
      }
LAB_00197d5d:
      param_1[1] = lStack_48;
      *param_1 = -0x7fffffffffffffff;
      _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17he4fa8c614f7df1fbE
                (&lStack_40);
      return;
    }
    lStack_38 = _ZN5serde2de5Error14invalid_length17h422b069e7e7d7720E(0);
  }
  param_1[1] = lStack_38;
  *param_1 = -0x7fffffffffffffff;
  return;
}