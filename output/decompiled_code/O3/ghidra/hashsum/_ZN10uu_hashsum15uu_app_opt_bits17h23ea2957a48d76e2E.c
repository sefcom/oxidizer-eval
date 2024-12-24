void __rustcall uu_hashsum::uu_app_opt_bits(undefined8 param_1,undefined8 param_2)

{
  undefined local_770 [592];
  undefined local_520 [592];
  undefined local_2d0 [712];
  
  (*(code *)PTR_memcpy_004806c8)(local_2d0,param_2,0x2c8);
                    /* try { // try from 002db8fe to 002db97a has its CatchHandler @ 002db999 */
  clap_builder::builder::arg::Arg::new(local_770,&DAT_00166c6c,4);
  clap_builder::builder::arg::Arg::long(local_520,local_770,&DAT_00166c6c,4);
  clap_builder::builder::arg::Arg::help
            (local_770,local_520,
             "set the size of the output (only for SHAKE)work with MD5work with SHA1work with SHA3work with SHA3-224work with SHA3-256work with SHA3-384work with SHA3-512work with SHAKE128 using BITS for the output sizework with SHAKE256 using BITS for the output size"
             ,0x2b);
  clap_builder::builder::arg::Arg::value_name(local_520,local_770,&DAT_00169050);
  clap_builder::builder::arg::Arg::value_parser(local_770,local_520);
  clap_builder::builder::command::Command::arg(param_1,local_2d0,local_770);
  return;
}