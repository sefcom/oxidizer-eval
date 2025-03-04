undefined8 _ZN5uu_od6uu_app17hbbddbed21fc2c7d3E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [584];
  uint local_800;
  undefined4 local_7fc;
  ulong local_78c;
  undefined4 local_784;
  undefined local_780 [700];
  ulong local_4c4;
  undefined4 local_4bc;
  char *local_4b8;
  undefined8 local_4b0;
  char *local_4a8;
  undefined8 local_4a0;
  uint local_270;
  undefined4 local_26c;
  undefined local_268 [592];
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h47430efafb217caaE(local_780,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h563b12925e352954E
            (auStack_a48,local_780,"0.0.28",6);
  _ZN12clap_builder7builder7command7Command5about17h9feb1943aebb1d3fE
            (local_780,auStack_a48,"Dump files in octal and other formats",0x25);
                    /* try { // try from 001c6a1e to 001c6a37 has its CatchHandler @ 001c7b17 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E
            (&local_4b8,
             "{} [OPTION]... [--] [FILENAME]...\n{} [-abcdDefFhHiIlLoOsxX] [FILENAME] [[+][0x]OFFSET[.][b]]\n{} --traditional [OPTION]... [FILENAME] [[+][0x]OFFSET[.][b] [[+][0x]LABEL[.][b]]]"
             ,0xaf);
  _ZN12clap_builder7builder7command7Command14override_usage17h053935d0df82dda4E
            (auStack_a48,local_780,&local_4b8);
  _ZN12clap_builder7builder7command7Command10after_help17hc9918c962e97ccb9E
            (local_780,auStack_a48,
             "Displays data in various human-readable formats. If multiple formats are\nspecified, the output will contain all formats in the order they appear on the\ncommand line. Each format will be printed on a new line. Only the line\ncontaining the first format will be prefixed with the offset.\n\nIf no filename is specified, or it is \"-\", stdin will be used. After a \"--\", no\nmore options will be recognized. This allows for filenames starting with a \"-\".\n\nIf a filename is a valid number which can be used as an offset in the second\nform, you can force it to be recognized as a filename if you include an option\nlike \"-j0\", which is only valid in the first form.\n\nRADIX is one of o,d,x,n for octal, decimal, hexadecimal or none.\n\nBYTES is decimal by default, octal if prefixed with a \"0\", or hexadecimal if\nprefixed with \"0x\". The suffixes b, KB, K, MB, M, GB, G, will multiply the\nnumber with 512, 1000, 1024, 1000^2, 1024^2, 1000^3, 1024^3, 1000^2, 1024^2.\n\nOFFSET and LABEL are octal by default, hexadecimal if prefixed with \"0x\" or\ndecimal if a \".\" suffix is added. The \"b\" suffix will multiply with 512.\n\nTYPE contains one or more format specifications consisting of:\n    a       for printable 7-bits ASCII\n    c       for utf-8 characters or octal for undefined characters\n    d[SIZE] for signed decimal\n    f[SIZE] for floating point\n    o[SIZE] for octal\n    u[SIZE] for unsigned decimal\n    x[SIZE] for hexadecimal\nSIZE is the number of bytes which can be the number 1, 2, 4, 8 or 16,\n    or C, I, S, L for 1, 2, 4, 8 bytes for integer types,\n    or F, D, L for 4, 8, 16 bytes for floating point.\nAny type specification can have a \"z\" suffix, which will add a ASCII dump at\n    the end of the line.\n\nIf an error occurred, a diagnostic message will be printed to stderr, and the\nexit code will be non-zero."
             ,0x70d);
  (*(code *)PTR_memcpy_00247068)(auStack_a48,local_780,700);
  local_78c = local_4c4 | 0x400c8000400e8;
  local_784 = local_4bc;
                    /* try { // try from 001c6aab to 001c6b05 has its CatchHandler @ 001c7cbb */
  _ZN12clap_builder7builder3arg3Arg3new17h3ee8def6fb85f401E(local_780,&DAT_0010d6a0,4);
  _ZN12clap_builder7builder3arg3Arg4long17h9e982e05d1967df1E(&local_4b8,local_780,&DAT_0010d6a0,4);
  _ZN12clap_builder7builder3arg3Arg4help17h526a7c98ea600f1bE
            (local_780,&local_4b8,"Print help information.",0x17);
  _ZN12clap_builder7builder3arg3Arg6action17hf94e6b04f9335b82E(&local_4b8,local_780,5);
  _ZN12clap_builder7builder7command7Command3arg17hc3213052d83c3ed0E
            (local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c6b36 to 001c6bb5 has its CatchHandler @ 001c7cf4 */
  _ZN12clap_builder7builder3arg3Arg3new17h3ee8def6fb85f401E(auStack_a48,"address-radix",0xd);
  _ZN12clap_builder7builder3arg3Arg5short17h979ed91ff0c4a334E(&local_4b8,auStack_a48,0x41);
  _ZN12clap_builder7builder3arg3Arg4long17h9e982e05d1967df1E
            (auStack_a48,&local_4b8,"address-radix",0xd);
  _ZN12clap_builder7builder3arg3Arg4help17h526a7c98ea600f1bE
            (&local_4b8,auStack_a48,"Select the base in which file offsets are printed.",0x32);
  _ZN12clap_builder7builder3arg3Arg10value_name17hf04d8fd04594ffa1E(local_268,&local_4b8,"RADIX",5);
  _ZN12clap_builder7builder7command7Command3arg17hc3213052d83c3ed0E(auStack_a48,local_780,local_268)
  ;
                    /* try { // try from 001c6bce to 001c6c61 has its CatchHandler @ 001c7ce7 */
  _ZN12clap_builder7builder3arg3Arg3new17h3ee8def6fb85f401E(local_780,"skip-bytes",10);
  _ZN12clap_builder7builder3arg3Arg5short17h979ed91ff0c4a334E(&local_4b8,local_780,0x6a);
  _ZN12clap_builder7builder3arg3Arg4long17h9e982e05d1967df1E(local_780,&local_4b8,"skip-bytes",10);
  _ZN12clap_builder7builder3arg3Arg4help17h526a7c98ea600f1bE
            (&local_4b8,local_780,"Skip bytes input bytes before formatting and writing.",0x35);
  _ZN12clap_builder7builder3arg3Arg10value_name17hf04d8fd04594ffa1E(local_268,&local_4b8,"BYTES",5);
  _ZN12clap_builder7builder7command7Command3arg17hc3213052d83c3ed0E(local_780,auStack_a48,local_268)
  ;
                    /* try { // try from 001c6c7a to 001c6cf9 has its CatchHandler @ 001c7cd5 */
  _ZN12clap_builder7builder3arg3Arg3new17h3ee8def6fb85f401E(auStack_a48,"read-bytes",10);
  _ZN12clap_builder7builder3arg3Arg5short17h979ed91ff0c4a334E(&local_4b8,auStack_a48,0x4e);
  _ZN12clap_builder7builder3arg3Arg4long17h9e982e05d1967df1E(auStack_a48,&local_4b8,"read-bytes",10)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17h526a7c98ea600f1bE
            (&local_4b8,auStack_a48,"limit dump to BYTES input bytes",0x1f);
  _ZN12clap_builder7builder3arg3Arg10value_name17hf04d8fd04594ffa1E(local_268,&local_4b8,"BYTES",5);
  _ZN12clap_builder7builder7command7Command3arg17hc3213052d83c3ed0E(auStack_a48,local_780,local_268)
  ;
                    /* try { // try from 001c6d12 to 001c6d6c has its CatchHandler @ 001c7cc8 */
  _ZN12clap_builder7builder3arg3Arg3new17h3ee8def6fb85f401E(local_780,"endian",6);
  _ZN12clap_builder7builder3arg3Arg4long17h9e982e05d1967df1E(&local_4b8,local_780,"endian",6);
  _ZN12clap_builder7builder3arg3Arg4help17h526a7c98ea600f1bE
            (local_780,&local_4b8,"byte order to use for multi-byte formats",0x28);
  local_4b8 = "big";
  local_4b0 = 3;
  local_4a8 = "little";
  local_4a0 = 6;
                    /* try { // try from 001c6da3 to 001c6db7 has its CatchHandler @ 001c7b02 */
  _ZN107__LT_uucore__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17h5e92bc9db343bff7E
            (local_268,&local_4b8);
                    /* try { // try from 001c6db8 to 001c6dd4 has its CatchHandler @ 001c7afd */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h528a5cc439739288E
            (&local_4b8,local_780,local_268);
                    /* try { // try from 001c6dd5 to 001c6df5 has its CatchHandler @ 001c7cc8 */
  _ZN12clap_builder7builder3arg3Arg10value_name17hf04d8fd04594ffa1E
            (local_268,&local_4b8,"big|little",10);
  _ZN12clap_builder7builder7command7Command3arg17hc3213052d83c3ed0E(local_780,auStack_a48,local_268)
  ;
                    /* try { // try from 001c6e0e to 001c6ea4 has its CatchHandler @ 001c7d18 */
  _ZN12clap_builder7builder3arg3Arg3new17h3ee8def6fb85f401E(auStack_a48,"strings",7);
  _ZN12clap_builder7builder3arg3Arg5short17h979ed91ff0c4a334E(&local_4b8,auStack_a48,0x53);
  _ZN12clap_builder7builder3arg3Arg4long17h9e982e05d1967df1E(auStack_a48,&local_4b8,"strings",7);
  _ZN12clap_builder7builder3arg3Arg4help17h526a7c98ea600f1bE
            (&local_4b8,auStack_a48,
             "NotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified."
             ,0x69);
  _ZN12clap_builder7builder3arg3Arg21default_missing_value17h61d700cb9e1e17e3E
            (auStack_a48,&local_4b8,"3",1);
  _ZN12clap_builder7builder3arg3Arg10value_name17hf04d8fd04594ffa1E
            (&local_4b8,auStack_a48,"BYTES",5);
  _ZN12clap_builder7builder7command7Command3arg17hc3213052d83c3ed0E
            (auStack_a48,local_780,&local_4b8);
                    /* try { // try from 001c6ebd to 001c6f0e has its CatchHandler @ 001c7c8e */
  _ZN12clap_builder7builder3arg3Arg3new17h3ee8def6fb85f401E(local_780,"a",1);
  _ZN12clap_builder7builder3arg3Arg5short17h979ed91ff0c4a334E(&local_4b8,local_780,0x61);
  _ZN12clap_builder7builder3arg3Arg4help17h526a7c98ea600f1bE
            (local_780,&local_4b8,"named characters, ignoring high-order bit",0x29);
  _ZN12clap_builder7builder3arg3Arg6action17hf94e6b04f9335b82E(&local_4b8,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17hc3213052d83c3ed0E
            (local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c6f3f to 001c6f81 has its CatchHandler @ 001c7c79 */
  _ZN12clap_builder7builder3arg3Arg3new17h3ee8def6fb85f401E(auStack_a48,"b",1);
  _ZN12clap_builder7builder3arg3Arg5short17h979ed91ff0c4a334E(&local_4b8,auStack_a48,0x62);
  _ZN12clap_builder7builder3arg3Arg4help17h526a7c98ea600f1bE
            (auStack_a48,&local_4b8,"octal bytes",0xb);
  _ZN12clap_builder7builder3arg3Arg6action17hf94e6b04f9335b82E(&local_4b8,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17hc3213052d83c3ed0E
            (auStack_a48,local_780,&local_4b8);
                    /* try { // try from 001c6fad to 001c6ffe has its CatchHandler @ 001c7c69 */
  _ZN12clap_builder7builder3arg3Arg3new17h3ee8def6fb85f401E(local_780,"c",1);
  _ZN12clap_builder7builder3arg3Arg5short17h979ed91ff0c4a334E(&local_4b8,local_780,99);
  _ZN12clap_builder7builder3arg3Arg4help17h526a7c98ea600f1bE
            (local_780,&local_4b8,"ASCII characters or backslash escapes",0x25);
  _ZN12clap_builder7builder3arg3Arg6action17hf94e6b04f9335b82E(&local_4b8,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17hc3213052d83c3ed0E
            (local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c702f to 001c7071 has its CatchHandler @ 001c7c54 */
  _ZN12clap_builder7builder3arg3Arg3new17h3ee8def6fb85f401E(auStack_a48,"d",1);
  _ZN12clap_builder7builder3arg3Arg5short17h979ed91ff0c4a334E(&local_4b8,auStack_a48,100);
  _ZN12clap_builder7builder3arg3Arg4help17h526a7c98ea600f1bE
            (auStack_a48,&local_4b8,"unsigned decimal 2-byte units",0x1d);
  _ZN12clap_builder7builder3arg3Arg6action17hf94e6b04f9335b82E(&local_4b8,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17hc3213052d83c3ed0E
            (auStack_a48,local_780,&local_4b8);
                    /* try { // try from 001c709d to 001c70ee has its CatchHandler @ 001c7c44 */
  _ZN12clap_builder7builder3arg3Arg3new17h3ee8def6fb85f401E(local_780,"D",1);
  _ZN12clap_builder7builder3arg3Arg5short17h979ed91ff0c4a334E(&local_4b8,local_780,0x44);
  _ZN12clap_builder7builder3arg3Arg4help17h526a7c98ea600f1bE
            (local_780,&local_4b8,"unsigned decimal 4-byte units",0x1d);
  _ZN12clap_builder7builder3arg3Arg6action17hf94e6b04f9335b82E(&local_4b8,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17hc3213052d83c3ed0E
            (local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c711f to 001c7161 has its CatchHandler @ 001c7c2f */
  _ZN12clap_builder7builder3arg3Arg3new17h3ee8def6fb85f401E(auStack_a48,"o",1);
  _ZN12clap_builder7builder3arg3Arg5short17h979ed91ff0c4a334E(&local_4b8,auStack_a48,0x6f);
  _ZN12clap_builder7builder3arg3Arg4help17h526a7c98ea600f1bE
            (auStack_a48,&local_4b8,"octal 2-byte units",0x12);
  _ZN12clap_builder7builder3arg3Arg6action17hf94e6b04f9335b82E(&local_4b8,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17hc3213052d83c3ed0E
            (auStack_a48,local_780,&local_4b8);
                    /* try { // try from 001c718d to 001c71de has its CatchHandler @ 001c7c1f */
  _ZN12clap_builder7builder3arg3Arg3new17h3ee8def6fb85f401E(local_780,"I",1);
  _ZN12clap_builder7builder3arg3Arg5short17h979ed91ff0c4a334E(&local_4b8,local_780,0x49);
  _ZN12clap_builder7builder3arg3Arg4help17h526a7c98ea600f1bE
            (local_780,&local_4b8,"decimal 8-byte units",0x14);
  _ZN12clap_builder7builder3arg3Arg6action17hf94e6b04f9335b82E(&local_4b8,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17hc3213052d83c3ed0E
            (local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c720f to 001c7251 has its CatchHandler @ 001c7c0a */
  _ZN12clap_builder7builder3arg3Arg3new17h3ee8def6fb85f401E(auStack_a48,"L",1);
  _ZN12clap_builder7builder3arg3Arg5short17h979ed91ff0c4a334E(&local_4b8,auStack_a48,0x4c);
  _ZN12clap_builder7builder3arg3Arg4help17h526a7c98ea600f1bE
            (auStack_a48,&local_4b8,"decimal 8-byte units",0x14);
  _ZN12clap_builder7builder3arg3Arg6action17hf94e6b04f9335b82E(&local_4b8,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17hc3213052d83c3ed0E
            (auStack_a48,local_780,&local_4b8);
                    /* try { // try from 001c727d to 001c72ce has its CatchHandler @ 001c7bfa */
  _ZN12clap_builder7builder3arg3Arg3new17h3ee8def6fb85f401E(local_780,"i",1);
  _ZN12clap_builder7builder3arg3Arg5short17h979ed91ff0c4a334E(&local_4b8,local_780,0x69);
  _ZN12clap_builder7builder3arg3Arg4help17h526a7c98ea600f1bE
            (local_780,&local_4b8,"decimal 4-byte units",0x14);
  _ZN12clap_builder7builder3arg3Arg6action17hf94e6b04f9335b82E(&local_4b8,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17hc3213052d83c3ed0E
            (local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c72ff to 001c7341 has its CatchHandler @ 001c7be5 */
  _ZN12clap_builder7builder3arg3Arg3new17h3ee8def6fb85f401E(auStack_a48,"l",1);
  _ZN12clap_builder7builder3arg3Arg5short17h979ed91ff0c4a334E(&local_4b8,auStack_a48,0x6c);
  _ZN12clap_builder7builder3arg3Arg4help17h526a7c98ea600f1bE
            (auStack_a48,&local_4b8,"decimal 8-byte units",0x14);
  _ZN12clap_builder7builder3arg3Arg6action17hf94e6b04f9335b82E(&local_4b8,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17hc3213052d83c3ed0E
            (auStack_a48,local_780,&local_4b8);
                    /* try { // try from 001c736d to 001c73be has its CatchHandler @ 001c7bd5 */
  _ZN12clap_builder7builder3arg3Arg3new17h3ee8def6fb85f401E(local_780,"x",1);
  _ZN12clap_builder7builder3arg3Arg5short17h979ed91ff0c4a334E(&local_4b8,local_780,0x78);
  _ZN12clap_builder7builder3arg3Arg4help17h526a7c98ea600f1bE
            (local_780,&local_4b8,"hexadecimal 2-byte units",0x18);
  _ZN12clap_builder7builder3arg3Arg6action17hf94e6b04f9335b82E(&local_4b8,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17hc3213052d83c3ed0E
            (local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c73ef to 001c7431 has its CatchHandler @ 001c7bc0 */
  _ZN12clap_builder7builder3arg3Arg3new17h3ee8def6fb85f401E(auStack_a48,"h",1);
  _ZN12clap_builder7builder3arg3Arg5short17h979ed91ff0c4a334E(&local_4b8,auStack_a48,0x68);
  _ZN12clap_builder7builder3arg3Arg4help17h526a7c98ea600f1bE
            (auStack_a48,&local_4b8,"hexadecimal 2-byte units",0x18);
  _ZN12clap_builder7builder3arg3Arg6action17hf94e6b04f9335b82E(&local_4b8,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17hc3213052d83c3ed0E
            (auStack_a48,local_780,&local_4b8);
                    /* try { // try from 001c745d to 001c74ae has its CatchHandler @ 001c7bb0 */
  _ZN12clap_builder7builder3arg3Arg3new17h3ee8def6fb85f401E(local_780,"O",1);
  _ZN12clap_builder7builder3arg3Arg5short17h979ed91ff0c4a334E(&local_4b8,local_780,0x4f);
  _ZN12clap_builder7builder3arg3Arg4help17h526a7c98ea600f1bE
            (local_780,&local_4b8,"octal 4-byte units",0x12);
  _ZN12clap_builder7builder3arg3Arg6action17hf94e6b04f9335b82E(&local_4b8,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17hc3213052d83c3ed0E
            (local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c74df to 001c7521 has its CatchHandler @ 001c7b9b */
  _ZN12clap_builder7builder3arg3Arg3new17h3ee8def6fb85f401E(auStack_a48,"s",1);
  _ZN12clap_builder7builder3arg3Arg5short17h979ed91ff0c4a334E(&local_4b8,auStack_a48,0x73);
  _ZN12clap_builder7builder3arg3Arg4help17h526a7c98ea600f1bE
            (auStack_a48,&local_4b8,"decimal 2-byte units",0x14);
  _ZN12clap_builder7builder3arg3Arg6action17hf94e6b04f9335b82E(&local_4b8,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17hc3213052d83c3ed0E
            (auStack_a48,local_780,&local_4b8);
                    /* try { // try from 001c754d to 001c759e has its CatchHandler @ 001c7b8b */
  _ZN12clap_builder7builder3arg3Arg3new17h3ee8def6fb85f401E(local_780,"X",1);
  _ZN12clap_builder7builder3arg3Arg5short17h979ed91ff0c4a334E(&local_4b8,local_780,0x58);
  _ZN12clap_builder7builder3arg3Arg4help17h526a7c98ea600f1bE
            (local_780,&local_4b8,"hexadecimal 4-byte units",0x18);
  _ZN12clap_builder7builder3arg3Arg6action17hf94e6b04f9335b82E(&local_4b8,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17hc3213052d83c3ed0E
            (local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c75cf to 001c7611 has its CatchHandler @ 001c7b76 */
  _ZN12clap_builder7builder3arg3Arg3new17h3ee8def6fb85f401E(auStack_a48,"H",1);
  _ZN12clap_builder7builder3arg3Arg5short17h979ed91ff0c4a334E(&local_4b8,auStack_a48,0x48);
  _ZN12clap_builder7builder3arg3Arg4help17h526a7c98ea600f1bE
            (auStack_a48,&local_4b8,"hexadecimal 4-byte units",0x18);
  _ZN12clap_builder7builder3arg3Arg6action17hf94e6b04f9335b82E(&local_4b8,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17hc3213052d83c3ed0E
            (auStack_a48,local_780,&local_4b8);
                    /* try { // try from 001c763d to 001c768e has its CatchHandler @ 001c7b66 */
  _ZN12clap_builder7builder3arg3Arg3new17h3ee8def6fb85f401E(local_780,"e",1);
  _ZN12clap_builder7builder3arg3Arg5short17h979ed91ff0c4a334E(&local_4b8,local_780,0x65);
  _ZN12clap_builder7builder3arg3Arg4help17h526a7c98ea600f1bE
            (local_780,&local_4b8,"floating point double precision (64-bit) units",0x2e);
  _ZN12clap_builder7builder3arg3Arg6action17hf94e6b04f9335b82E(&local_4b8,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17hc3213052d83c3ed0E
            (local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c76bf to 001c7701 has its CatchHandler @ 001c7b51 */
  _ZN12clap_builder7builder3arg3Arg3new17h3ee8def6fb85f401E(auStack_a48,"f",1);
  _ZN12clap_builder7builder3arg3Arg5short17h979ed91ff0c4a334E(&local_4b8,auStack_a48,0x66);
  _ZN12clap_builder7builder3arg3Arg4help17h526a7c98ea600f1bE
            (auStack_a48,&local_4b8,"floating point double precision (32-bit) units",0x2e);
  _ZN12clap_builder7builder3arg3Arg6action17hf94e6b04f9335b82E(&local_4b8,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17hc3213052d83c3ed0E
            (auStack_a48,local_780,&local_4b8);
                    /* try { // try from 001c772d to 001c777e has its CatchHandler @ 001c7b41 */
  _ZN12clap_builder7builder3arg3Arg3new17h3ee8def6fb85f401E(local_780,"F",1);
  _ZN12clap_builder7builder3arg3Arg5short17h979ed91ff0c4a334E(&local_4b8,local_780,0x46);
  _ZN12clap_builder7builder3arg3Arg4help17h526a7c98ea600f1bE
            (local_780,&local_4b8,"floating point double precision (64-bit) units",0x2e);
  _ZN12clap_builder7builder3arg3Arg6action17hf94e6b04f9335b82E(&local_4b8,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17hc3213052d83c3ed0E
            (local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c77af to 001c7856 has its CatchHandler @ 001c7d06 */
  _ZN12clap_builder7builder3arg3Arg3new17h3ee8def6fb85f401E(auStack_a48,"format",6);
  _ZN12clap_builder7builder3arg3Arg5short17h979ed91ff0c4a334E(&local_4b8,auStack_a48,0x74);
  _ZN12clap_builder7builder3arg3Arg4long17h9e982e05d1967df1E(auStack_a48,&local_4b8,"format",6);
  _ZN12clap_builder7builder3arg3Arg4help17h526a7c98ea600f1bE
            (&local_4b8,auStack_a48,"select output format or formats",0x1f);
  _ZN12clap_builder7builder3arg3Arg6action17hf94e6b04f9335b82E(auStack_a48,&local_4b8,1);
  _ZN12clap_builder7builder3arg3Arg8num_args17h394c78398f130568E(&local_4b8,auStack_a48);
  _ZN12clap_builder7builder3arg3Arg10value_name17hf04d8fd04594ffa1E
            (local_268,&local_4b8,&DAT_0010d6bc,4);
  _ZN12clap_builder7builder7command7Command3arg17hc3213052d83c3ed0E(auStack_a48,local_780,local_268)
  ;
                    /* try { // try from 001c786f to 001c78e1 has its CatchHandler @ 001c7cae */
  _ZN12clap_builder7builder3arg3Arg3new17h3ee8def6fb85f401E(local_780,"output-duplicates",0x11);
  _ZN12clap_builder7builder3arg3Arg5short17h979ed91ff0c4a334E(&local_4b8,local_780,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17h9e982e05d1967df1E
            (local_780,&local_4b8,"output-duplicates",0x11);
  _ZN12clap_builder7builder3arg3Arg4help17h526a7c98ea600f1bE
            (&local_4b8,local_780,"do not use * to mark line suppression",0x25);
  _ZN12clap_builder7builder3arg3Arg6action17hf94e6b04f9335b82E(local_268,&local_4b8,2);
  _ZN12clap_builder7builder7command7Command3arg17hc3213052d83c3ed0E(local_780,auStack_a48,local_268)
  ;
                    /* try { // try from 001c7912 to 001c79bd has its CatchHandler @ 001c7d2a */
  _ZN12clap_builder7builder3arg3Arg3new17h3ee8def6fb85f401E(auStack_a48,"width: warning: ",5);
  _ZN12clap_builder7builder3arg3Arg5short17h979ed91ff0c4a334E(&local_4b8,auStack_a48,0x77);
  _ZN12clap_builder7builder3arg3Arg4long17h9e982e05d1967df1E
            (auStack_a48,&local_4b8,"width: warning: ",5);
  _ZN12clap_builder7builder3arg3Arg4help17h526a7c98ea600f1bE
            (&local_4b8,auStack_a48,
             "output BYTES bytes per output line. 32 is implied when BYTES is not specified.",0x4e);
  _ZN12clap_builder7builder3arg3Arg21default_missing_value17h61d700cb9e1e17e3E
            (auStack_a48,&local_4b8,"32",2);
  _ZN12clap_builder7builder3arg3Arg10value_name17hf04d8fd04594ffa1E
            (&local_4b8,auStack_a48,"BYTES",5);
  _ZN12clap_builder7builder3arg3Arg8num_args17h4f7823f969f44fd2E(local_268,&local_4b8);
  _ZN12clap_builder7builder7command7Command3arg17hc3213052d83c3ed0E(auStack_a48,local_780,local_268)
  ;
                    /* try { // try from 001c79d6 to 001c7a30 has its CatchHandler @ 001c7c9e */
  _ZN12clap_builder7builder3arg3Arg3new17h3ee8def6fb85f401E(local_780,"traditional",0xb);
  _ZN12clap_builder7builder3arg3Arg4long17h9e982e05d1967df1E(&local_4b8,local_780,"traditional",0xb)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17h526a7c98ea600f1bE
            (local_780,&local_4b8,
             "compatibility mode with one input, offset and label.\n  invalid suffix in -- argument invalid ---- too large"
             ,0x34);
  _ZN12clap_builder7builder3arg3Arg6action17hf94e6b04f9335b82E(&local_4b8,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17hc3213052d83c3ed0E
            (local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c7a61 to 001c7a74 has its CatchHandler @ 001c7b2c */
  _ZN12clap_builder7builder3arg3Arg3new17h3ee8def6fb85f401E(auStack_a48,"FILENAME",8);
  (*(code *)PTR_memcpy_00247068)(&local_4b8,auStack_a48,0x248);
  local_270 = local_800 | 4;
  local_26c = local_7fc;
  _ZN12clap_builder7builder3arg3Arg6action17hf94e6b04f9335b82E(auStack_a48,&local_4b8,1);
                    /* try { // try from 001c7ac0 to 001c7ad4 has its CatchHandler @ 001c7b2c */
  _ZN12clap_builder7builder3arg3Arg10value_hint17hde7c948aedfb35d8E(&local_4b8,auStack_a48,3);
  _ZN12clap_builder7builder7command7Command3arg17hc3213052d83c3ed0E(param_1,local_780,&local_4b8);
  return param_1;
}