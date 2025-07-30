void _ZN7flealib10fleaserver25remove_newline_characters17h03a01e77daac1003E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined auStack_58 [8];
  long local_50;
  long local_48;
  undefined local_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  long local_20;
  
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E(auStack_58);
                    /* try { // try from 0049d14e to 0049d15c has its CatchHandler @ 0049d1ee */
  _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hd78aa449e9cb76feE(local_40,local_50,local_48,10);
                    /* try { // try from 0049d15d to 0049d17b has its CatchHandler @ 0049d208 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(auStack_58);
  _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hd78aa449e9cb76feE(auStack_58,local_38,local_30,0xd)
  ;
  local_20 = local_50 + local_48;
  local_28 = local_50;
  auVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8position17hae5b526ea16bb78fE
                     (&local_28);
  if (auVar3._0_8_ != 0) {
                    /* try { // try from 0049d1a3 to 0049d1c2 has its CatchHandler @ 0049d1fb */
    uVar2 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17ha9914e413251f43eE
                      (auVar3._8_8_,local_50,local_48,&PTR_DAT_0080b1e8);
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
              (param_1,uVar2);
                    /* try { // try from 0049d1c3 to 0049d1ca has its CatchHandler @ 0049d208 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(auStack_58);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(local_40);
    return;
  }
                    /* try { // try from 0049d1df to 0049d1eb has its CatchHandler @ 0049d1fb */
  (*(code *)PTR__ZN4core6option13unwrap_failed17hf53ee17a2013bd69E_008267e8)(&PTR_DAT_0080b1d0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}