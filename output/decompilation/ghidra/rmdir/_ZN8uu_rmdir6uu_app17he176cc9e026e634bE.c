undefined8 _ZN8uu_rmdir6uu_app17he176cc9e026e634bE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_a50 [584];
  uint local_808;
  undefined4 local_804;
  ulong local_794;
  undefined4 local_78c;
  undefined local_788 [584];
  uint local_540;
  undefined4 local_53c;
  undefined local_538 [700];
  ulong local_27c;
  undefined4 local_274;
  undefined8 local_270 [74];
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h729fb2eca598e7e0E(local_a50,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h4e16bcafc6797686E(local_538,local_a50);
  _ZN12clap_builder7builder7command7Command5about17h2590688cd038a4f8E(local_a50,local_538);
                    /* try { // try from 001aa6d7 to 001aa6f0 has its CatchHandler @ 001aaa21 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_788,"{} [OPTION]... DIRECTORY...",0x1b);
  _ZN12clap_builder7builder7command7Command14override_usage17h984a09963e79e475E
            (local_538,local_a50,local_788);
  (*(code *)PTR_memcpy_00211210)(local_a50,local_538,700);
  local_794 = local_27c | 0x8000000080;
  local_78c = local_274;
  _ZN12clap_builder7builder3arg3Arg3new17h966ac186c29780c1E
            (local_538,"ignore-fail-on-non-empty",0x18);
  _ZN12clap_builder7builder3arg3Arg4long17hab324419c3767ea5E
            (local_788,local_538,"ignore-fail-on-non-empty",0x18);
                    /* try { // try from 001aa783 to 001aa79e has its CatchHandler @ 001aaa12 */
  _ZN12clap_builder7builder3arg3Arg4help17h4eedc8ea57112d2eE
            (local_538,local_788,
             "ignore each failure that is solely because a directory is non-empty",0x43);
  _ZN12clap_builder7builder3arg3Arg6action17ha207a77d808e47c3E(local_788,local_538,2);
  _ZN12clap_builder7builder7command7Command3arg17h5975801d6b308c5cE(local_538,local_a50,local_788);
  _ZN12clap_builder7builder3arg3Arg3new17h966ac186c29780c1E(local_a50,"parents",7);
  _ZN12clap_builder7builder3arg3Arg5short17h325ab8446f1eb8baE(local_788,local_a50,0x70);
  _ZN12clap_builder7builder3arg3Arg4long17hab324419c3767ea5E(local_a50,local_788,"parents",7);
                    /* try { // try from 001aa81d to 001aa838 has its CatchHandler @ 001aaa00 */
  _ZN12clap_builder7builder3arg3Arg4help17h4eedc8ea57112d2eE
            (local_788,local_a50,
             "remove DIRECTORY and its ancestors; e.g.,\n                  \'rmdir -p a/b/c\' is similar to rmdir a/b/c a/b a"
             ,0x6c);
  _ZN12clap_builder7builder3arg3Arg6action17ha207a77d808e47c3E(local_270,local_788,2);
  _ZN12clap_builder7builder7command7Command3arg17h5975801d6b308c5cE(local_a50,local_538,local_270);
  _ZN12clap_builder7builder3arg3Arg3new17h966ac186c29780c1E
            (local_538,"verbose: removing directory, \n",7);
  _ZN12clap_builder7builder3arg3Arg5short17h325ab8446f1eb8baE(local_788,local_538,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17hab324419c3767ea5E
            (local_538,local_788,"verbose: removing directory, \n",7);
                    /* try { // try from 001aa8bd to 001aa8d8 has its CatchHandler @ 001aa9f1 */
  _ZN12clap_builder7builder3arg3Arg4help17h4eedc8ea57112d2eE
            (local_788,local_538,"output a diagnostic for every directory processed",0x31);
  _ZN12clap_builder7builder3arg3Arg6action17ha207a77d808e47c3E(local_270,local_788,2);
  _ZN12clap_builder7builder7command7Command3arg17h5975801d6b308c5cE(local_538,local_a50,local_270);
  _ZN12clap_builder7builder3arg3Arg3new17h966ac186c29780c1E(local_a50,&DAT_00112dfc,4);
  _ZN12clap_builder7builder3arg3Arg6action17ha207a77d808e47c3E(local_788,local_a50,1);
  _ZN12clap_builder7builder3arg3Arg8num_args17h4ae6db6e08d351beE(local_a50,local_788);
  (*(code *)PTR_memcpy_00211210)(local_788,local_a50,0x248);
  local_540 = local_808 | 1;
  local_53c = local_804;
  local_270[0] = 2;
                    /* try { // try from 001aa990 to 001aa9a4 has its CatchHandler @ 001aa9df */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h7936c038b7a39011E(local_a50,local_788,local_270)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_hint17h0db0af3d90a31669E(local_788,local_a50);
  _ZN12clap_builder7builder7command7Command3arg17h5975801d6b308c5cE(param_1,local_538,local_788);
  return param_1;
}