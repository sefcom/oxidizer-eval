undefined8 _ZN10uu_hashsum13uu_app_custom17h3a63177c817a427eE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined local_b08 [640];
  undefined local_888 [712];
  undefined local_5c0 [712];
  undefined local_2f8 [712];
  
  (*(code *)PTR__ZN10uu_hashsum13uu_app_common17he3603fb037840435E_0025af18)(local_2f8);
  _ZN10uu_hashsum15uu_app_opt_bits17hd6aa31a29dfb5e22E(local_888,local_2f8);
  _ZN10uu_hashsum17uu_app_b3sum_opts17h5c3cae50ae21738fE(local_5c0,local_888);
  lVar3 = 0x18;
  do {
    (*(code *)PTR_memcpy_0025ac18)(local_2f8,local_5c0,0x2c8);
    uVar1 = *(undefined8 *)
             ((long)&PTR__ZN6uucore8features3sum6Digest12output_bytes17h4568a3c8981505daE_002519b0 +
             lVar3);
    uVar2 = *(undefined8 *)
             ((long)&PTR__ZN6uucore8features3sum6Digest12output_bytes17h4568a3c8981505daE_002519b8 +
             lVar3);
    _ZN12clap_builder7builder3arg3Arg3new17h6aa2bb62d5e3b990E(local_888,uVar1,uVar2);
    _ZN12clap_builder7builder3arg3Arg4long17h289d326220dea97bE(local_b08,local_888,uVar1,uVar2);
                    /* try { // try from 00183541 to 0018354d has its CatchHandler @ 001835bd */
    _ZN12clap_builder7builder3arg3Arg4help17h2bc0660901b2ceb5E
              (local_888,local_b08,
               *(undefined8 *)
                ((long)&PTR__ZN6uucore8features3sum6Digest10result_str17h9602eda4d683104aE_002519c0
                + lVar3),*(undefined8 *)((long)&PTR_s_md5_002519c8 + lVar3));
    _ZN12clap_builder7builder3arg3Arg6action17ha30e37a18dbb74d5E(local_b08,local_888,2);
    _ZN12clap_builder7builder7command7Command3arg17h6ab44b22cd7561c2E(local_5c0,local_2f8,local_b08)
    ;
    lVar3 = lVar3 + 0x20;
  } while (lVar3 != 0x1f8);
  (*(code *)PTR_memcpy_0025ac18)(param_1,local_5c0,0x2c8);
  return param_1;
}