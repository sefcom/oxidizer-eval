void _ZN7uu_more10break_buff17he6395443a668b94eE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined auVar3 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80 [6];
  undefined2 local_50;
  undefined local_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h77b0cfb9226a3587E
            (local_80);
  local_90 = 0;
  local_50 = 0;
  local_88 = param_3;
  uVar1 = _ZN4core4iter6traits8iterator8Iterator4fold17haf2e61b0f943967aE(&local_90);
  _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_15try_allocate_in17h5d7525725ab87575E(&local_90,uVar1,0);
  if (local_90 == 0) {
    local_a8 = local_88;
    uStack_a0 = local_80[0];
    local_98 = 0;
    _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h77b0cfb9226a3587E
              (local_80,param_2,param_3);
    local_90 = 0;
    local_50 = 0;
    local_88 = param_3;
    while( true ) {
                    /* try { // try from 001dddd0 to 001dddf5 has its CatchHandler @ 001dde54 */
      lVar2 = _ZN4core3str4iter22SplitInternal_LT_P_GT_14next_inclusive17h6d0b307c0d2190f6E
                        (&local_90);
      if (lVar2 == 0) break;
      auVar3 = _ZN4core3ops8function5impls80__LT_impl_u20_core__ops__function__FnOnce_LT_A_GT__u20_for_u20__RF_mut_u20_F_GT_9call_once17h200055905ca292d8E
                         (local_48,lVar2);
      _ZN7uu_more10break_line17h73539b671d3ea9e7E(local_48,auVar3._0_8_,auVar3._8_8_,param_4);
                    /* try { // try from 001dde00 to 001dde07 has its CatchHandler @ 001dde45 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h3ec15337970eadceE
                (&local_a8,local_40,local_38);
      local_38 = 0;
                    /* try { // try from 001dde11 to 001dde18 has its CatchHandler @ 001dde54 */
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h54d13806247b6c15E
                (local_48);
    }
    param_1[2] = local_98;
    *param_1 = local_a8;
    param_1[1] = uStack_a0;
    return;
  }
  uVar1 = _ZN5alloc7raw_vec12handle_error17h2372476369f9b8acE(local_88,local_80[0]);
                    /* catch() { ... } // from try @ 001dde00 with catch @ 001dde45 */
                    /* try { // try from 001dde48 to 001dde5e has its CatchHandler @ 001dde67 */
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h54d13806247b6c15E
            (local_48);
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h54d13806247b6c15E
            (&local_a8);
  _Unwind_Resume(uVar1);
  return;
}