undefined8 _ZN9uu_basenc6uu_app17hfbf1ac7160545103E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined **local_cc0;
  undefined **local_cb8;
  undefined local_cb0 [712];
  undefined local_9e8 [592];
  undefined local_798 [592];
  undefined local_548 [592];
  undefined local_2f8 [712];
  
  _ZN9uu_base3211base_common8base_app17ha21d2a66676032efE
            (local_cb0,&DAT_00123516,0x129,&DAT_0012363f,0x15);
  local_cc0 = &PTR_DAT_0024fab0;
  local_cb8 = &
              PTR__ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb8d56522d3c47933E_0024fbf0
  ;
  puVar3 = (undefined8 *)
           _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h86bd5f729982ba3cE
                     (&local_cc0);
  if (puVar3 != (undefined8 *)0x0) {
    do {
      uVar1 = *puVar3;
      uVar2 = puVar3[1];
      _ZN12clap_builder7builder3arg3Arg3new17hd3b1b2715557d506E(local_2f8,uVar1,uVar2);
      _ZN12clap_builder7builder3arg3Arg4long17h1e54b164c00deb30E(local_798,local_2f8,uVar1,uVar2);
                    /* try { // try from 001c6726 to 001c674e has its CatchHandler @ 001c67b5 */
      _ZN12clap_builder7builder3arg3Arg4help17h3663629a520cf311E
                (local_2f8,local_798,puVar3[3],puVar3[4]);
      _ZN12clap_builder7builder3arg3Arg6action17h3a70dcd1ad8d9a87E(local_9e8,local_2f8);
      _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17hd6435d6f64c66af2E
                (local_548,local_9e8);
      (*(code *)PTR_memcpy_00253e98)(local_2f8,local_cb0,0x2c8);
      _ZN12clap_builder7builder7command7Command3arg17h7e432bbe18d5085dE
                (local_cb0,local_2f8,local_548);
      puVar3 = (undefined8 *)
               _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h86bd5f729982ba3cE
                         (&local_cc0);
    } while (puVar3 != (undefined8 *)0x0);
  }
  (*(code *)PTR_memcpy_00253e98)(param_1,local_cb0,0x2c8);
  return param_1;
}