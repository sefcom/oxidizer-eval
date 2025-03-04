undefined8 _ZN11uu_readlink6uu_app17h387e9546761b38a6E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_a50 [592];
  undefined local_800 [700];
  ulong local_544;
  undefined4 local_53c;
  undefined local_538 [700];
  ulong local_27c;
  undefined4 local_274;
  undefined local_270 [592];
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17hd3cf78caaacb3353E(local_800,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h5769eb7fe5d5d686E(local_538,local_800);
  _ZN12clap_builder7builder7command7Command5about17hc4b6e58c034683c5E(local_800,local_538);
                    /* try { // try from 001b637d to 001b6393 has its CatchHandler @ 001b69b9 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_a50,"{} [OPTION]... [FILE]...",0x18);
  _ZN12clap_builder7builder7command7Command14override_usage17h4b8d0145a5fc5c19E
            (local_538,local_800,local_a50);
  (*(code *)PTR_memcpy_0021e480)(local_800,local_538,700);
  local_544 = local_27c | 0x8000000080;
  local_53c = local_274;
  _ZN12clap_builder7builder3arg3Arg3new17h465ca0a72bbbad2eE(local_538,"canonicalize",0xc);
  _ZN12clap_builder7builder3arg3Arg5short17h90ac967af5f5b923E(local_a50,local_538,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17hff5d49378248701bE(local_538,local_a50,"canonicalize",0xc)
  ;
                    /* try { // try from 001b643e to 001b6456 has its CatchHandler @ 001b69a7 */
  _ZN12clap_builder7builder3arg3Arg4help17h2cb296bdd2950d14E
            (local_a50,local_538,
             "canonicalize by following every symlink in every component of the given name recursively; all but the last component must exist"
             ,0x7f);
  _ZN12clap_builder7builder3arg3Arg6action17h53fbdacfe1f99565E(local_270,local_a50,2);
  _ZN12clap_builder7builder7command7Command3arg17h802601a73353d1b7E(local_538,local_800,local_270);
  _ZN12clap_builder7builder3arg3Arg3new17h465ca0a72bbbad2eE(local_800,"canonicalize-existing",0x15);
  _ZN12clap_builder7builder3arg3Arg5short17h90ac967af5f5b923E(local_a50,local_800,0x65);
  _ZN12clap_builder7builder3arg3Arg4long17hff5d49378248701bE
            (local_800,local_a50,"canonicalize-existing",0x15);
                    /* try { // try from 001b64d8 to 001b64f0 has its CatchHandler @ 001b6995 */
  _ZN12clap_builder7builder3arg3Arg4help17h2cb296bdd2950d14E
            (local_a50,local_800,
             "canonicalize by following every symlink in every component of the given name recursively, all components must exist"
             ,0x73);
  _ZN12clap_builder7builder3arg3Arg6action17h53fbdacfe1f99565E(local_270,local_a50,2);
  _ZN12clap_builder7builder7command7Command3arg17h802601a73353d1b7E(local_800,local_538,local_270);
  _ZN12clap_builder7builder3arg3Arg3new17h465ca0a72bbbad2eE(local_538,"canonicalize-missing",0x14);
  _ZN12clap_builder7builder3arg3Arg5short17h90ac967af5f5b923E(local_a50,local_538,0x6d);
  _ZN12clap_builder7builder3arg3Arg4long17hff5d49378248701bE
            (local_538,local_a50,"canonicalize-missing",0x14);
                    /* try { // try from 001b6572 to 001b658a has its CatchHandler @ 001b6983 */
  _ZN12clap_builder7builder3arg3Arg4help17h2cb296bdd2950d14E
            (local_a50,local_538,
             "canonicalize by following every symlink in every component of the given name recursively, without requirements on components existence"
             ,0x86);
  _ZN12clap_builder7builder3arg3Arg6action17h53fbdacfe1f99565E(local_270,local_a50,2);
  _ZN12clap_builder7builder7command7Command3arg17h802601a73353d1b7E(local_538,local_800,local_270);
  _ZN12clap_builder7builder3arg3Arg3new17h465ca0a72bbbad2eE(local_800,"no-newline",10);
  _ZN12clap_builder7builder3arg3Arg5short17h90ac967af5f5b923E(local_a50,local_800,0x6e);
  _ZN12clap_builder7builder3arg3Arg4long17hff5d49378248701bE(local_800,local_a50,"no-newline",10);
                    /* try { // try from 001b660c to 001b6624 has its CatchHandler @ 001b6971 */
  _ZN12clap_builder7builder3arg3Arg4help17h2cb296bdd2950d14E
            (local_a50,local_800,"do not output the trailing delimiter",0x24);
  _ZN12clap_builder7builder3arg3Arg6action17h53fbdacfe1f99565E(local_270,local_a50,2);
  _ZN12clap_builder7builder7command7Command3arg17h802601a73353d1b7E(local_800,local_538,local_270);
  _ZN12clap_builder7builder3arg3Arg3new17h465ca0a72bbbad2eE(local_538,"quiet",5);
  _ZN12clap_builder7builder3arg3Arg5short17h90ac967af5f5b923E(local_a50,local_538,0x71);
  _ZN12clap_builder7builder3arg3Arg4long17hff5d49378248701bE(local_538,local_a50,"quiet",5);
                    /* try { // try from 001b66a6 to 001b66be has its CatchHandler @ 001b695f */
  _ZN12clap_builder7builder3arg3Arg4help17h2cb296bdd2950d14E
            (local_a50,local_538,"suppress most error messages",0x1c);
  _ZN12clap_builder7builder3arg3Arg6action17h53fbdacfe1f99565E(local_270,local_a50,2);
  _ZN12clap_builder7builder7command7Command3arg17h802601a73353d1b7E(local_538,local_800,local_270);
  _ZN12clap_builder7builder3arg3Arg3new17h465ca0a72bbbad2eE(local_800,"silent",6);
  _ZN12clap_builder7builder3arg3Arg5short17h90ac967af5f5b923E(local_a50,local_800,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17hff5d49378248701bE(local_800,local_a50,"silent",6);
                    /* try { // try from 001b6740 to 001b6758 has its CatchHandler @ 001b694d */
  _ZN12clap_builder7builder3arg3Arg4help17h2cb296bdd2950d14E
            (local_a50,local_800,"suppress most error messages",0x1c);
  _ZN12clap_builder7builder3arg3Arg6action17h53fbdacfe1f99565E(local_270,local_a50,2);
  _ZN12clap_builder7builder7command7Command3arg17h802601a73353d1b7E(local_800,local_538,local_270);
  _ZN12clap_builder7builder3arg3Arg3new17h465ca0a72bbbad2eE(local_538,"verbose",7);
  _ZN12clap_builder7builder3arg3Arg5short17h90ac967af5f5b923E(local_a50,local_538,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17hff5d49378248701bE(local_538,local_a50,"verbose",7);
                    /* try { // try from 001b67da to 001b67f2 has its CatchHandler @ 001b693b */
  _ZN12clap_builder7builder3arg3Arg4help17h2cb296bdd2950d14E
            (local_a50,local_538,"report error message",0x14);
  _ZN12clap_builder7builder3arg3Arg6action17h53fbdacfe1f99565E(local_270,local_a50,2);
  _ZN12clap_builder7builder7command7Command3arg17h802601a73353d1b7E(local_538,local_800,local_270);
  _ZN12clap_builder7builder3arg3Arg3new17h465ca0a72bbbad2eE(local_800,&DAT_0011465c,4);
  _ZN12clap_builder7builder3arg3Arg5short17h90ac967af5f5b923E(local_a50,local_800,0x7a);
  _ZN12clap_builder7builder3arg3Arg4long17hff5d49378248701bE(local_800,local_a50,&DAT_0011465c,4);
                    /* try { // try from 001b6874 to 001b688c has its CatchHandler @ 001b6926 */
  _ZN12clap_builder7builder3arg3Arg4help17h2cb296bdd2950d14E
            (local_a50,local_800,"separate output with NUL rather than newline",0x2c);
  _ZN12clap_builder7builder3arg3Arg6action17h53fbdacfe1f99565E(local_270,local_a50,2);
  _ZN12clap_builder7builder7command7Command3arg17h802601a73353d1b7E(local_800,local_538,local_270);
  _ZN12clap_builder7builder3arg3Arg3new17h465ca0a72bbbad2eE(local_538,"files",5);
  _ZN12clap_builder7builder3arg3Arg6action17h53fbdacfe1f99565E(local_a50,local_538,1);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h8d3b916d6ea2c8c1E(local_538,local_a50);
  _ZN12clap_builder7builder7command7Command3arg17h802601a73353d1b7E(param_1,local_800,local_538);
  return param_1;
}