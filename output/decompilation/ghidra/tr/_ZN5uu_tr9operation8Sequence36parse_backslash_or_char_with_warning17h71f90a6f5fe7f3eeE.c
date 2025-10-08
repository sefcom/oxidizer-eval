void _ZN5uu_tr9operation8Sequence36parse_backslash_or_char_with_warning17h71f90a6f5fe7f3eeE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long alStack_b0 [18];
  
  uVar1 = _ZN4core5clone5impls54__LT_impl_u20_core__clone__Clone_u20_for_u20__RF_T_GT_5clone17h8ce7130b3f9737bcE
                    (param_2,param_3);
  _ZN52__LT_F_u20_as_u20_nom__internal__Parser_LT_I_GT__GT_7process17h399a8eb71b43d45bE
            (alStack_b0,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0016f042. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0011ad60 + *(int *)(&DAT_0011ad60 + alStack_b0[0] * 4)))();
  return;
}