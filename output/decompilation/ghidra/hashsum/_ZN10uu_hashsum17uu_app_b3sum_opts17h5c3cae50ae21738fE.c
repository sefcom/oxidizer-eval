void _ZN10uu_hashsum17uu_app_b3sum_opts17h5c3cae50ae21738fE(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_7e8 [640];
  undefined local_568 [712];
  undefined local_2a0 [640];
  
  (*(code *)PTR_memcpy_0025ac18)(local_568,param_2,0x2c8);
  _ZN12clap_builder7builder3arg3Arg3new17h6aa2bb62d5e3b990E(auStack_7e8,&DAT_00111e50,8);
  _ZN12clap_builder7builder3arg3Arg4long17h400c12573ef6d75cE(local_2a0,auStack_7e8,&DAT_00111e50,8);
                    /* try { // try from 001832e9 to 001832ff has its CatchHandler @ 0018333a */
  _ZN12clap_builder7builder3arg3Arg4help17h2bc0660901b2ceb5E
            (auStack_7e8,local_2a0,
             "Omits filenames in the output (option not present in GNU/Coreutils)",0x43);
  _ZN12clap_builder7builder3arg3Arg6action17ha30e37a18dbb74d5E(local_2a0,auStack_7e8,2);
  _ZN12clap_builder7builder7command7Command3arg17h6ab44b22cd7561c2E(param_1,local_568,local_2a0);
  return;
}