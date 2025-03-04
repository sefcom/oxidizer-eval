undefined4 _ZN5uu_cp7copydir19ends_with_slash_dot17h7ca260d86f8cd653E(void)

{
  undefined4 uVar1;
  undefined local_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined local_18 [16];
  
  local_18 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h28e4b529e1fbf8c2E
                       ();
  _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h0383ffa9f5ca7973E
            (local_30,local_18);
                    /* try { // try from 0020dfdd to 0020dfed has its CatchHandler @ 0020e002 */
  uVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17h706a83e6dc488ee6E
                    (local_28,local_20,"/.",2);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5bdd96f6f34778b9E(local_30);
  return uVar1;
}