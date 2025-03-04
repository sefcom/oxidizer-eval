undefined8 _ZN5uu_dd6uu_app17h3802aa9aab1c575cE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_7f8 [700];
  ulong local_53c;
  undefined4 local_534;
  undefined local_530 [700];
  ulong local_274;
  undefined4 local_26c;
  undefined local_268 [592];
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17hf97bd87459802514E(auStack_7f8,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h6f458816302443eeE
            (local_530,auStack_7f8,&DAT_00123e12,6);
  _ZN12clap_builder7builder7command7Command5about17hd0a67f39e5f79877E
            (auStack_7f8,local_530,&DAT_00123e18,0x34);
                    /* try { // try from 001d90a9 to 001d90c2 has its CatchHandler @ 001d9182 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_268,&DAT_00123e4c,0x19);
  _ZN12clap_builder7builder7command7Command14override_usage17hf9cdd864c2ccec31E
            (local_530,auStack_7f8,local_268);
  _ZN12clap_builder7builder7command7Command10after_help17h7c32531b2b18b3b1E
            (auStack_7f8,local_530,&DAT_00123e65,0x13b7);
  (*(code *)PTR_memcpy_00266548)(local_530,auStack_7f8,700);
  local_274 = local_53c | 0x8000000080;
  local_26c = local_534;
                    /* try { // try from 001d9136 to 001d9159 has its CatchHandler @ 001d918f */
  _ZN12clap_builder7builder3arg3Arg3new17h6fd0ebadb6d2a465E
            (auStack_7f8,"operandsESTRPIPENotFoundTimedOut",8);
  _ZN12clap_builder7builder3arg3Arg8num_args17hf9a6d8997dc166ecE(local_268,auStack_7f8);
  _ZN12clap_builder7builder7command7Command3arg17h29f22bc80a5408b1E(param_1,local_530,local_268);
  return param_1;
}