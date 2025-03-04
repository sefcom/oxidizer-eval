undefined8 _ZN7uu_comm6uu_app17ha6c652ac8df11865E(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined local_a50 [584];
  uint local_808;
  undefined4 local_804;
  ulong local_794;
  undefined4 local_78c;
  undefined local_788 [584];
  uint local_540;
  undefined4 local_53c;
  undefined local_538 [584];
  uint local_2f0;
  undefined4 local_2ec;
  ulong local_27c;
  undefined4 local_274;
  undefined local_270 [592];
  
  uVar2 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h8cb04297ccfbdc55E(local_a50,uVar2);
  _ZN12clap_builder7builder7command7Command7version17h0b8db7f7545f961fE
            (local_538,local_a50,"0.0.28",6);
  _ZN12clap_builder7builder7command7Command5about17hcd89649185c31ce1E
            (local_a50,local_538,
             "Compare two sorted files line by line.\n\nWhen FILE1 or FILE2 (not both) is -, read standard input.\n\nWith no options, produce three-column output. Column one contains\nlines unique to FILE1, column two contains lines unique to FILE2,\nand column three contains lines common to both files."
             ,0x11c);
                    /* try { // try from 001ab51f to 001ab538 has its CatchHandler @ 001aba81 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_788,"{} [OPTION]... FILE1 FILE2",0x1a);
  _ZN12clap_builder7builder7command7Command14override_usage17h59e8652e835bd692E
            (local_538,local_a50,local_788);
  (*(code *)PTR_memcpy_00214aa8)(local_a50,local_538,700);
  local_794 = local_27c | 0x8800000088;
  local_78c = local_274;
                    /* try { // try from 001ab591 to 001ab5e2 has its CatchHandler @ 001abad5 */
  _ZN12clap_builder7builder3arg3Arg3new17h47bf6f0437181cd3E(local_538,"1",1);
  _ZN12clap_builder7builder3arg3Arg5short17h57149b05e5532777E(local_788,local_538,0x31);
  _ZN12clap_builder7builder3arg3Arg4help17hc6c4258c6b5f5ae1E
            (local_538,local_788,"suppress column 1 (lines unique to FILE1)",0x29);
  _ZN12clap_builder7builder3arg3Arg6action17h63942fa244e4e2d7E(local_788,local_538,2);
  _ZN12clap_builder7builder7command7Command3arg17hdf03a1032199929fE(local_538,local_a50,local_788);
                    /* try { // try from 001ab615 to 001ab65d has its CatchHandler @ 001abac3 */
  _ZN12clap_builder7builder3arg3Arg3new17h47bf6f0437181cd3E(local_a50,"2",1);
  _ZN12clap_builder7builder3arg3Arg5short17h57149b05e5532777E(local_788,local_a50,0x32);
  _ZN12clap_builder7builder3arg3Arg4help17hc6c4258c6b5f5ae1E
            (local_a50,local_788,"suppress column 2 (lines unique to FILE2)",0x29);
  _ZN12clap_builder7builder3arg3Arg6action17h63942fa244e4e2d7E(local_788,local_a50,2);
  _ZN12clap_builder7builder7command7Command3arg17hdf03a1032199929fE(local_a50,local_538,local_788);
                    /* try { // try from 001ab68d to 001ab6de has its CatchHandler @ 001abab4 */
  _ZN12clap_builder7builder3arg3Arg3new17h47bf6f0437181cd3E(local_538,"3",1);
  _ZN12clap_builder7builder3arg3Arg5short17h57149b05e5532777E(local_788,local_538,0x33);
  _ZN12clap_builder7builder3arg3Arg4help17hc6c4258c6b5f5ae1E
            (local_538,local_788,"suppress column 3 (lines that appear in both files)",0x33);
  _ZN12clap_builder7builder3arg3Arg6action17h63942fa244e4e2d7E(local_788,local_538,2);
  _ZN12clap_builder7builder7command7Command3arg17hdf03a1032199929fE(local_538,local_a50,local_788);
                    /* try { // try from 001ab711 to 001ab786 has its CatchHandler @ 001abb05 */
  _ZN12clap_builder7builder3arg3Arg3new17h47bf6f0437181cd3E(local_a50,&DAT_00114040,0x10);
  _ZN12clap_builder7builder3arg3Arg4long17hf8a62a6ddf6ca989E(local_788,local_a50,&DAT_00114040,0x10)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17hc6c4258c6b5f5ae1E
            (local_a50,local_788,"separate columns with STR",0x19);
  _ZN12clap_builder7builder3arg3Arg10value_name17h48c23f45fee90993E(local_788,local_a50);
  _ZN12clap_builder7builder3arg3Arg13default_value17h76809d39c32b1ee7E(local_a50,local_788);
  puVar1 = PTR_memcpy_00214aa8;
  (*(code *)PTR_memcpy_00214aa8)(local_788,local_a50,0x248);
  local_540 = local_808 | 0x20;
  local_53c = local_804;
  _ZN12clap_builder7builder3arg3Arg6action17h63942fa244e4e2d7E(local_a50,local_788,1);
  (*(code *)puVar1)(local_788,local_a50,0x248);
  local_540 = local_808 | 0x400;
  local_53c = local_804;
  _ZN12clap_builder7builder7command7Command3arg17hdf03a1032199929fE(local_a50,local_538,local_788);
                    /* try { // try from 001ab826 to 001ab8b9 has its CatchHandler @ 001abaf6 */
  _ZN12clap_builder7builder3arg3Arg3new17h47bf6f0437181cd3E(local_538,"zero-terminated",0xf);
  _ZN12clap_builder7builder3arg3Arg4long17hf8a62a6ddf6ca989E
            (local_788,local_538,"zero-terminated",0xf);
  _ZN12clap_builder7builder3arg3Arg5short17h57149b05e5532777E(local_538,local_788,0x7a);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h148f45f9c75c9d7bE
            (local_788,local_538,"zero-terminated",0xf);
  _ZN12clap_builder7builder3arg3Arg4help17hc6c4258c6b5f5ae1E
            (local_538,local_788,"line delimiter is NUL, not newline",0x22);
  _ZN12clap_builder7builder3arg3Arg6action17h63942fa244e4e2d7E(local_788,local_538,2);
  _ZN12clap_builder7builder7command7Command3arg17hdf03a1032199929fE(local_538,local_a50,local_788);
                    /* try { // try from 001ab8ec to 001ab901 has its CatchHandler @ 001abaa2 */
  _ZN12clap_builder7builder3arg3Arg3new17h47bf6f0437181cd3E(local_a50,"FILE1",5);
  (*(code *)PTR_memcpy_00214aa8)(local_788,local_a50,0x248);
  local_540 = local_808 | 1;
  local_53c = local_804;
                    /* try { // try from 001ab93c to 001ab950 has its CatchHandler @ 001abaa2 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17hdc1c549de59681abE(local_270,local_788,3);
  _ZN12clap_builder7builder7command7Command3arg17hdf03a1032199929fE(local_a50,local_538,local_270);
                    /* try { // try from 001ab96b to 001ab983 has its CatchHandler @ 001aba93 */
  _ZN12clap_builder7builder3arg3Arg3new17h47bf6f0437181cd3E(local_538,"FILE2",5);
  (*(code *)PTR_memcpy_00214aa8)(local_788,local_538,0x248);
  local_540 = local_2f0 | 1;
  local_53c = local_2ec;
                    /* try { // try from 001ab9c1 to 001ab9d5 has its CatchHandler @ 001aba93 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17hdc1c549de59681abE(local_270,local_788,3);
  _ZN12clap_builder7builder7command7Command3arg17hdf03a1032199929fE(local_538,local_a50,local_270);
                    /* try { // try from 001ab9f0 to 001aba41 has its CatchHandler @ 001abae4 */
  _ZN12clap_builder7builder3arg3Arg3new17h47bf6f0437181cd3E(local_a50,"total",5);
  _ZN12clap_builder7builder3arg3Arg4long17hf8a62a6ddf6ca989E(local_788,local_a50,"total",5);
  _ZN12clap_builder7builder3arg3Arg4help17hc6c4258c6b5f5ae1E
            (local_a50,local_788,"output a summary",0x10);
  _ZN12clap_builder7builder3arg3Arg6action17h63942fa244e4e2d7E(local_788,local_a50,2);
  _ZN12clap_builder7builder7command7Command3arg17hdf03a1032199929fE(param_1,local_538,local_788);
  return param_1;
}