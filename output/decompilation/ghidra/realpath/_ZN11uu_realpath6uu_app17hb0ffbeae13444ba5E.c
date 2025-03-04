undefined8 _ZN11uu_realpath6uu_app17hb0ffbeae13444ba5E(undefined8 param_1)

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
  char *local_270;
  undefined8 local_268;
  char *local_260;
  undefined8 local_258;
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h84d7059bcc77226cE(local_a50,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hff33f7b38d12333fE
            (local_538,local_a50,"0.0.28",6);
  _ZN12clap_builder7builder7command7Command5about17hc7d8fe242993619bE
            (local_a50,local_538,"Print the resolved path",0x17);
                    /* try { // try from 001b5c6f to 001b5c88 has its CatchHandler @ 001b638b */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_788,"{} [OPTION]... FILE...",0x16);
  _ZN12clap_builder7builder7command7Command14override_usage17hcc99de9d6052085dE
            (local_538,local_a50,local_788);
  (*(code *)PTR_memcpy_002272c8)(local_a50,local_538,700);
  local_794 = local_27c | 0x8000000080;
  local_78c = local_274;
                    /* try { // try from 001b5ce1 to 001b5d53 has its CatchHandler @ 001b63f7 */
  _ZN12clap_builder7builder3arg3Arg3new17h6504e08b710a16deE(local_538,"quiet",5);
  _ZN12clap_builder7builder3arg3Arg5short17hf61a71a8cd499090E(local_788,local_538,0x71);
  _ZN12clap_builder7builder3arg3Arg4long17hea3b5174cb57a464E(local_538,local_788,"quiet",5);
  _ZN12clap_builder7builder3arg3Arg4help17h1ff567aaa6dbb257E
            (local_788,local_538,"Do not print warnings for invalid paths",0x27);
  _ZN12clap_builder7builder3arg3Arg6action17h57bbe48e1d937193E(&local_270,local_788,2);
  _ZN12clap_builder7builder7command7Command3arg17hc56797c71f92da5cE(local_538,local_a50,&local_270);
                    /* try { // try from 001b5d86 to 001b5e0d has its CatchHandler @ 001b6415 */
  _ZN12clap_builder7builder3arg3Arg3new17h6504e08b710a16deE(local_a50,"strip",5);
  _ZN12clap_builder7builder3arg3Arg5short17hf61a71a8cd499090E(local_788,local_a50,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17hea3b5174cb57a464E(local_a50,local_788,"strip",5);
  _ZN12clap_builder7builder3arg3Arg13visible_alias17h75123c17be531ca5E
            (local_788,local_a50,"no-symlinks",0xb);
  _ZN12clap_builder7builder3arg3Arg4help17h1ff567aaa6dbb257E
            (local_a50,local_788,
             "Only strip \'.\' and \'..\' components, but don\'t resolve symbolic links",0x44);
  _ZN12clap_builder7builder3arg3Arg6action17h57bbe48e1d937193E(local_788,local_a50,2);
  _ZN12clap_builder7builder7command7Command3arg17hc56797c71f92da5cE(local_a50,local_538,local_788);
                    /* try { // try from 001b5e3d to 001b5eaf has its CatchHandler @ 001b63e8 */
  _ZN12clap_builder7builder3arg3Arg3new17h6504e08b710a16deE(local_538,&DAT_00114958,4);
  _ZN12clap_builder7builder3arg3Arg5short17hf61a71a8cd499090E(local_788,local_538,0x7a);
  _ZN12clap_builder7builder3arg3Arg4long17hea3b5174cb57a464E(local_538,local_788,&DAT_00114958,4);
  _ZN12clap_builder7builder3arg3Arg4help17h1ff567aaa6dbb257E
            (local_788,local_538,"Separate output filenames with \\0 rather than newline",0x35);
  _ZN12clap_builder7builder3arg3Arg6action17h57bbe48e1d937193E(&local_270,local_788,2);
  _ZN12clap_builder7builder7command7Command3arg17hc56797c71f92da5cE(local_538,local_a50,&local_270);
                    /* try { // try from 001b5ee2 to 001b5f4b has its CatchHandler @ 001b63d6 */
  _ZN12clap_builder7builder3arg3Arg3new17h6504e08b710a16deE(local_a50,"logical",7);
  _ZN12clap_builder7builder3arg3Arg5short17hf61a71a8cd499090E(local_788,local_a50,0x4c);
  _ZN12clap_builder7builder3arg3Arg4long17hea3b5174cb57a464E(local_a50,local_788,"logical",7);
  _ZN12clap_builder7builder3arg3Arg4help17h1ff567aaa6dbb257E
            (local_788,local_a50,"resolve \'..\' components before symlinks",0x27);
  _ZN12clap_builder7builder3arg3Arg6action17h57bbe48e1d937193E(&local_270,local_788,2);
  _ZN12clap_builder7builder7command7Command3arg17hc56797c71f92da5cE(local_a50,local_538,&local_270);
                    /* try { // try from 001b5f7e to 001b6035 has its CatchHandler @ 001b6406 */
  _ZN12clap_builder7builder3arg3Arg3new17h6504e08b710a16deE(local_538,&DAT_001149d0,8);
  _ZN12clap_builder7builder3arg3Arg5short17hf61a71a8cd499090E(local_788,local_538,0x50);
  _ZN12clap_builder7builder3arg3Arg4long17hea3b5174cb57a464E(local_538,local_788,&DAT_001149d0,8);
  local_270 = "strip";
  local_268 = 5;
  local_260 = "logical";
  local_258 = 7;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h59dc2e0b13378d5bE
            (local_788,local_538,&local_270);
  _ZN12clap_builder7builder3arg3Arg4help17h1ff567aaa6dbb257E
            (local_538,local_788,"resolve symlinks as encountered (default)",0x29);
  _ZN12clap_builder7builder3arg3Arg6action17h57bbe48e1d937193E(local_788,local_538,2);
  _ZN12clap_builder7builder7command7Command3arg17hc56797c71f92da5cE(local_538,local_a50,local_788);
                    /* try { // try from 001b6068 to 001b60ce has its CatchHandler @ 001b63c4 */
  _ZN12clap_builder7builder3arg3Arg3new17h6504e08b710a16deE(local_a50,"canonicalize-existing",0x15);
  _ZN12clap_builder7builder3arg3Arg5short17hf61a71a8cd499090E(local_788,local_a50,0x65);
  _ZN12clap_builder7builder3arg3Arg4long17hea3b5174cb57a464E
            (local_a50,local_788,"canonicalize-existing",0x15);
  _ZN12clap_builder7builder3arg3Arg4help17h1ff567aaa6dbb257E
            (local_788,local_a50,
             "canonicalize by following every symlink in every component of the given name recursively, all components must exist"
             ,0x73);
  _ZN12clap_builder7builder3arg3Arg6action17h57bbe48e1d937193E(&local_270,local_788,2);
  _ZN12clap_builder7builder7command7Command3arg17hc56797c71f92da5cE(local_a50,local_538,&local_270);
                    /* try { // try from 001b6101 to 001b6173 has its CatchHandler @ 001b63b2 */
  _ZN12clap_builder7builder3arg3Arg3new17h6504e08b710a16deE(local_538,"canonicalize-missing",0x14);
  _ZN12clap_builder7builder3arg3Arg5short17hf61a71a8cd499090E(local_788,local_538,0x6d);
  _ZN12clap_builder7builder3arg3Arg4long17hea3b5174cb57a464E
            (local_538,local_788,"canonicalize-missing",0x14);
  _ZN12clap_builder7builder3arg3Arg4help17h1ff567aaa6dbb257E
            (local_788,local_538,
             "canonicalize by following every symlink in every component of the given name recursively, without requirements on components existence"
             ,0x86);
  _ZN12clap_builder7builder3arg3Arg6action17h57bbe48e1d937193E(&local_270,local_788,2);
  _ZN12clap_builder7builder7command7Command3arg17hc56797c71f92da5cE(local_538,local_a50,&local_270);
                    /* try { // try from 001b61a6 to 001b621e has its CatchHandler @ 001b6436 */
  _ZN12clap_builder7builder3arg3Arg3new17h6504e08b710a16deE(local_a50,"relative-to",0xb);
  _ZN12clap_builder7builder3arg3Arg4long17hea3b5174cb57a464E(local_788,local_a50,"relative-to",0xb);
  _ZN12clap_builder7builder3arg3Arg10value_name17hc405a264fb9ab443E(local_a50,local_788);
  _ZN12clap_builder7builder3arg3Arg12value_parser17hc7794c6702212de9E(local_788,local_a50);
  _ZN12clap_builder7builder3arg3Arg4help17h1ff567aaa6dbb257E
            (&local_270,local_788,"print the resolved path relative to DIR",0x27);
  _ZN12clap_builder7builder7command7Command3arg17hc56797c71f92da5cE(local_a50,local_538,&local_270);
                    /* try { // try from 001b6239 to 001b62bd has its CatchHandler @ 001b6427 */
  _ZN12clap_builder7builder3arg3Arg3new17h6504e08b710a16deE(local_538,"relative-base",0xd);
  _ZN12clap_builder7builder3arg3Arg4long17hea3b5174cb57a464E
            (local_788,local_538,"relative-base",0xd);
  _ZN12clap_builder7builder3arg3Arg10value_name17hc405a264fb9ab443E(local_538,local_788);
  _ZN12clap_builder7builder3arg3Arg12value_parser17hc7794c6702212de9E(local_788,local_538);
  _ZN12clap_builder7builder3arg3Arg4help17h1ff567aaa6dbb257E
            (&local_270,local_788,"print absolute paths unless paths below DIR",0x2b);
  _ZN12clap_builder7builder7command7Command3arg17hc56797c71f92da5cE(local_538,local_a50,&local_270);
                    /* try { // try from 001b62d8 to 001b62ed has its CatchHandler @ 001b639d */
  _ZN12clap_builder7builder3arg3Arg3new17h6504e08b710a16deE(local_a50,"files",5);
  _ZN12clap_builder7builder3arg3Arg6action17h57bbe48e1d937193E(local_788,local_a50,1);
  (*(code *)PTR_memcpy_002272c8)(local_a50,local_788,0x248);
  local_808 = local_540 | 1;
  local_804 = local_53c;
                    /* try { // try from 001b633d to 001b6363 has its CatchHandler @ 001b639d */
  _ZN12clap_builder7builder3arg3Arg12value_parser17hc7794c6702212de9E(local_788,local_a50);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h9a6c1b3f12da1918E(local_a50,local_788,2);
  _ZN12clap_builder7builder7command7Command3arg17hc56797c71f92da5cE(param_1,local_538,local_a50);
  return param_1;
}