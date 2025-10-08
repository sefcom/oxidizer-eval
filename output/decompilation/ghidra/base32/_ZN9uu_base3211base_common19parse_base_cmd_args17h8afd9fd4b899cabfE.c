void _ZN9uu_base3211base_common19parse_base_cmd_args17h8afd9fd4b899cabfE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined8 local_2f0;
  undefined local_2e8 [712];
  
  (*(code *)PTR__ZN9uu_base3211base_common8base_app17hf62dc1f5a26396f2E_00215258)
            (local_2e8,
             "encode/decode data and print to standard output\nWith no FILE, or when FILE is -, read standard input.\n\nThe data are encoded as described for the base32 alphabet in RFC 4648.\nWhen decoding, the input may contain newlines in addition\nto the bytes of the formal base32 alphabet. Use --ignore-garbage\nto attempt to recover from any other non-alphabet bytes in the\nencoded stream."
             ,0x177,"{} [OPTION]... [FILE]Error flushing stdout: ",0x15);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17he21a7f9860eb337fE
            (&local_320,local_2e8,param_2,param_3);
  local_328 = local_2f0;
  local_338 = local_300;
  uStack_334 = uStack_2fc;
  uStack_330 = uStack_2f8;
  uStack_32c = uStack_2f4;
  local_348 = local_310;
  uStack_344 = uStack_30c;
  uStack_340 = uStack_308;
  uStack_33c = uStack_304;
  local_358 = local_320;
  local_350 = local_318;
                    /* try { // try from 00163b01 to 00163b0c has its CatchHandler @ 00163b24 */
  (*(code *)PTR__ZN9uu_base3211base_common6Config4from17he8007e948e715e4fE_00215268)
            (param_1,&local_358);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h5c522e2052e0e896E
            (&local_358);
  return;
}