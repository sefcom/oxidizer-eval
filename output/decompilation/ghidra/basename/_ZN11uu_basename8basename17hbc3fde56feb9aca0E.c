undefined8
_ZN11uu_basename8basename17hbc3fde56feb9aca0E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined local_60 [56];
  
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = param_2;
  auVar2 = _ZN4core3str21__LT_impl_u20_str_GT_16trim_end_matches17h3730f7e24d6185fcE
                     (param_2,param_3);
  if (auVar2._8_8_ != 0) {
    auVar1 = auVar2;
  }
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he971b2aaaca9c129E
            (&local_a0,auVar1._0_8_,auVar1._8_8_);
                    /* try { // try from 00156ea1 to 00156ed1 has its CatchHandler @ 00156ef1 */
  (*(code *)PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_001e5b48)
            (&local_a0,local_98,local_90);
  (*(code *)
    PTR__ZN95__LT_std__path__Components_u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h8d3527ff230619beE_001e5b50
  )(local_60,&local_a0);
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h121bac109a08f39fE
            (param_1,local_60,param_4,param_5);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hb191495a642b50e5E(local_a0,local_98);
  return param_1;
}