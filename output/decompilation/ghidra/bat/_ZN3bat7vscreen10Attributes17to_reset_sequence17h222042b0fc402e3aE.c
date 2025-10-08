void _ZN3bat7vscreen10Attributes17to_reset_sequence17h222042b0fc402e3aE
               (undefined (*param_1) [16],long param_2)

{
  undefined local_28 [16];
  undefined8 local_18;
  
  local_28 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h2ab28548f23fa4abE
                       (0x11,1,1,&PTR_DAT_007cd180);
  local_18 = 0;
  if (param_2 != 0) {
                    /* try { // try from 0054530f to 00545324 has its CatchHandler @ 00545346 */
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h30747c9efb6a6381E
              (local_28,&DAT_002a2feb,&DAT_002a2ff2);
  }
  *(undefined8 *)param_1[1] = local_18;
  *param_1 = local_28;
  return;
}