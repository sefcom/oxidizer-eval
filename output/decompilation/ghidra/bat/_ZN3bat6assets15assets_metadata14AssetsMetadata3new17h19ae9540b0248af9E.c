void _ZN3bat6assets15assets_metadata14AssetsMetadata3new17h19ae9540b0248af9E(undefined8 *param_1)

{
  undefined auVar1 [12];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h6553538e39c64234E
            (&local_20);
                    /* try { // try from 00532602 to 00532607 has its CatchHandler @ 00532626 */
  auVar1 = (*(code *)PTR__ZN3std4time10SystemTime3now17h4fbc1302a9c481f4E_00808770)();
  param_1[2] = local_10;
  *param_1 = local_20;
  param_1[1] = uStack_18;
  *(undefined (*) [12])(param_1 + 3) = auVar1;
  return;
}