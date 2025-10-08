undefined8 _ZN5uu_od6uu_app17hcdf03cb1df11eb22E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_ab0 [700];
  ulong local_7f4;
  undefined4 local_7ec;
  undefined local_7e8 [632];
  uint local_570;
  undefined4 local_56c;
  ulong local_52c;
  undefined4 local_524;
  char *local_520;
  undefined8 local_518;
  char *local_510;
  undefined8 local_508;
  uint local_2a8;
  undefined4 local_2a4;
  undefined local_2a0 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0020aa88)();
  _ZN12clap_builder7builder7command7Command3new17hde45e83c432881e8E(local_ab0,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h7d6d8989f5c04e63E(local_7e8,local_ab0);
  _ZN12clap_builder7builder7command7Command5about17hcdc7aeb1074be224E(local_ab0,local_7e8);
                    /* try { // try from 0016c317 to 0016c330 has its CatchHandler @ 0016d656 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_0020ad28)
            (&local_520,
             "{} [OPTION]... [--] [FILENAME]...\n{} [-abcdDefFhHiIlLoOsxX] [FILENAME] [[+][0x]OFFSET[.][b]]\n{} --traditional [OPTION]... [FILENAME] [[+][0x]OFFSET[.][b] [[+][0x]LABEL[.][b]]]"
             ,0xaf);
  _ZN12clap_builder7builder7command7Command14override_usage17h19013c1e0725c126E
            (local_7e8,local_ab0,&local_520);
  _ZN12clap_builder7builder7command7Command10after_help17hf0eb83f0a1a00b5cE(local_ab0,local_7e8);
  (*(code *)PTR_memcpy_0020aa28)(local_7e8,local_ab0,700);
  local_52c = local_7f4 | 0x800c8000800e8;
  local_524 = local_7ec;
  _ZN12clap_builder7builder3arg3Arg3new17h944ad6c753b9862eE(local_ab0,&DAT_0011b1e4,4);
  _ZN12clap_builder7builder3arg3Arg4long17h5e292a21bf2e0846E(&local_520,local_ab0,&DAT_0011b1e4,4);
                    /* try { // try from 0016c3d3 to 0016c3eb has its CatchHandler @ 0016d644 */
  _ZN12clap_builder7builder3arg3Arg4help17h931fbd51fcb5a7e6E
            (local_ab0,&local_520,"Print help information.",0x17);
  _ZN12clap_builder7builder3arg3Arg6action17hb1056dd3e09bf4fbE(&local_520,local_ab0,5);
  _ZN12clap_builder7builder7command7Command3arg17h9f68d1a7073227deE(local_ab0,local_7e8,&local_520);
  _ZN12clap_builder7builder3arg3Arg3new17h944ad6c753b9862eE(local_7e8,"address-radix",0xd);
  _ZN12clap_builder7builder3arg3Arg5short17he4ece83972df5bdeE(&local_520,local_7e8,0x41);
  _ZN12clap_builder7builder3arg3Arg4long17h5e292a21bf2e0846E
            (local_7e8,&local_520,"address-radix",0xd);
                    /* try { // try from 0016c46d to 0016c4a9 has its CatchHandler @ 0016d6a7 */
  _ZN12clap_builder7builder3arg3Arg4help17h931fbd51fcb5a7e6E
            (&local_520,local_7e8,"Select the base in which file offsets are printed.",0x32);
  _ZN12clap_builder7builder3arg3Arg10value_name17h2fd07fdaa472a2f2E(local_2a0,&local_520,"RADIX",5);
  _ZN12clap_builder7builder7command7Command3arg17h9f68d1a7073227deE(local_7e8,local_ab0,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h944ad6c753b9862eE(local_ab0,"skip-bytes",10);
  _ZN12clap_builder7builder3arg3Arg5short17he4ece83972df5bdeE(&local_520,local_ab0,0x6a);
  _ZN12clap_builder7builder3arg3Arg4long17h5e292a21bf2e0846E(local_ab0,&local_520,"skip-bytes",10);
                    /* try { // try from 0016c510 to 0016c54c has its CatchHandler @ 0016d695 */
  _ZN12clap_builder7builder3arg3Arg4help17h931fbd51fcb5a7e6E
            (&local_520,local_ab0,"Skip bytes input bytes before formatting and writing.",0x35);
  _ZN12clap_builder7builder3arg3Arg10value_name17h2fd07fdaa472a2f2E(local_2a0,&local_520,"BYTES",5);
  _ZN12clap_builder7builder7command7Command3arg17h9f68d1a7073227deE(local_ab0,local_7e8,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h944ad6c753b9862eE(local_7e8,"read-bytes",10);
  _ZN12clap_builder7builder3arg3Arg5short17he4ece83972df5bdeE(&local_520,local_7e8,0x4e);
  _ZN12clap_builder7builder3arg3Arg4long17h5e292a21bf2e0846E(local_7e8,&local_520,"read-bytes",10);
                    /* try { // try from 0016c5b9 to 0016c5f5 has its CatchHandler @ 0016d686 */
  _ZN12clap_builder7builder3arg3Arg4help17h931fbd51fcb5a7e6E
            (&local_520,local_7e8,"limit dump to BYTES input bytes",0x1f);
  _ZN12clap_builder7builder3arg3Arg10value_name17h2fd07fdaa472a2f2E(local_2a0,&local_520,"BYTES",5);
  _ZN12clap_builder7builder7command7Command3arg17h9f68d1a7073227deE(local_7e8,local_ab0,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h944ad6c753b9862eE(local_ab0,"endian",6);
  _ZN12clap_builder7builder3arg3Arg4long17h5e292a21bf2e0846E(&local_520,local_ab0,"endian",6);
                    /* try { // try from 0016c647 to 0016c65f has its CatchHandler @ 0016d674 */
  _ZN12clap_builder7builder3arg3Arg4help17h931fbd51fcb5a7e6E
            (local_ab0,&local_520,"byte order to use for multi-byte formats",0x28);
  local_520 = "big";
  local_518 = 3;
  local_510 = "little";
  local_508 = 6;
                    /* try { // try from 0016c696 to 0016c6aa has its CatchHandler @ 0016d635 */
  _ZN117__LT_uucore__features__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17h827d1b255e26425eE
            (local_2a0,&local_520);
                    /* try { // try from 0016c6ab to 0016c6c4 has its CatchHandler @ 0016d633 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17hdb4abf0967fc2058E
            (&local_520,local_ab0,local_2a0);
                    /* try { // try from 0016c6c5 to 0016c6e5 has its CatchHandler @ 0016d674 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h2fd07fdaa472a2f2E
            (local_2a0,&local_520,"big|little",10);
  _ZN12clap_builder7builder7command7Command3arg17h9f68d1a7073227deE(local_ab0,local_7e8,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h944ad6c753b9862eE(local_7e8,"strings",7);
  _ZN12clap_builder7builder3arg3Arg5short17he4ece83972df5bdeE(&local_520,local_7e8,0x53);
  _ZN12clap_builder7builder3arg3Arg4long17h5e292a21bf2e0846E(local_7e8,&local_520,"strings",7);
                    /* try { // try from 0016c752 to 0016c7af has its CatchHandler @ 0016d6c5 */
  _ZN12clap_builder7builder3arg3Arg4help17h931fbd51fcb5a7e6E
            (&local_520,local_7e8,
             "NotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified."
             ,0x69);
  _ZN12clap_builder7builder3arg3Arg21default_missing_value17h2056f10ffc528da0E
            (local_7e8,&local_520,"3456789:;<=>?@ABC",1);
  _ZN12clap_builder7builder3arg3Arg10value_name17h2fd07fdaa472a2f2E(&local_520,local_7e8,"BYTES",5);
  _ZN12clap_builder7builder7command7Command3arg17h9f68d1a7073227deE(local_7e8,local_ab0,&local_520);
  _ZN12clap_builder7builder3arg3Arg3new17h944ad6c753b9862eE(local_ab0,"a",1);
  _ZN12clap_builder7builder3arg3Arg5short17he4ece83972df5bdeE(&local_520,local_ab0,0x61);
                    /* try { // try from 0016c7fb to 0016c813 has its CatchHandler @ 0016d61e */
  _ZN12clap_builder7builder3arg3Arg4help17h931fbd51fcb5a7e6E
            (local_ab0,&local_520,"named characters, ignoring high-order bit",0x29);
  _ZN12clap_builder7builder3arg3Arg6action17hb1056dd3e09bf4fbE(&local_520,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f68d1a7073227deE(local_ab0,local_7e8,&local_520);
  _ZN12clap_builder7builder3arg3Arg3new17h944ad6c753b9862eE(local_7e8,"b",1);
  _ZN12clap_builder7builder3arg3Arg5short17he4ece83972df5bdeE(&local_520,local_7e8,0x62);
                    /* try { // try from 0016c877 to 0016c892 has its CatchHandler @ 0016d60c */
  _ZN12clap_builder7builder3arg3Arg4help17h931fbd51fcb5a7e6E(local_7e8,&local_520,"octal bytes",0xb)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hb1056dd3e09bf4fbE(&local_520,local_7e8,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f68d1a7073227deE(local_7e8,local_ab0,&local_520);
  _ZN12clap_builder7builder3arg3Arg3new17h944ad6c753b9862eE(local_ab0,"c",1);
  _ZN12clap_builder7builder3arg3Arg5short17he4ece83972df5bdeE(&local_520,local_ab0,99);
                    /* try { // try from 0016c8f6 to 0016c90e has its CatchHandler @ 0016d5f7 */
  _ZN12clap_builder7builder3arg3Arg4help17h931fbd51fcb5a7e6E
            (local_ab0,&local_520,"ASCII characters or backslash escapes",0x25);
  _ZN12clap_builder7builder3arg3Arg6action17hb1056dd3e09bf4fbE(&local_520,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f68d1a7073227deE(local_ab0,local_7e8,&local_520);
  _ZN12clap_builder7builder3arg3Arg3new17h944ad6c753b9862eE(local_7e8,"d",1);
  _ZN12clap_builder7builder3arg3Arg5short17he4ece83972df5bdeE(&local_520,local_7e8,100);
                    /* try { // try from 0016c972 to 0016c98d has its CatchHandler @ 0016d5e5 */
  _ZN12clap_builder7builder3arg3Arg4help17h931fbd51fcb5a7e6E
            (local_7e8,&local_520,"unsigned decimal 2-byte units",0x1d);
  _ZN12clap_builder7builder3arg3Arg6action17hb1056dd3e09bf4fbE(&local_520,local_7e8,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f68d1a7073227deE(local_7e8,local_ab0,&local_520);
  _ZN12clap_builder7builder3arg3Arg3new17h944ad6c753b9862eE(local_ab0,"DE",1);
  _ZN12clap_builder7builder3arg3Arg5short17he4ece83972df5bdeE(&local_520,local_ab0,0x44);
                    /* try { // try from 0016c9f1 to 0016ca09 has its CatchHandler @ 0016d5d0 */
  _ZN12clap_builder7builder3arg3Arg4help17h931fbd51fcb5a7e6E
            (local_ab0,&local_520,"unsigned decimal 4-byte units",0x1d);
  _ZN12clap_builder7builder3arg3Arg6action17hb1056dd3e09bf4fbE(&local_520,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f68d1a7073227deE(local_ab0,local_7e8,&local_520);
  _ZN12clap_builder7builder3arg3Arg3new17h944ad6c753b9862eE(local_7e8,"opqr",1);
  _ZN12clap_builder7builder3arg3Arg5short17he4ece83972df5bdeE(&local_520,local_7e8,0x6f);
                    /* try { // try from 0016ca6d to 0016ca88 has its CatchHandler @ 0016d5be */
  _ZN12clap_builder7builder3arg3Arg4help17h931fbd51fcb5a7e6E
            (local_7e8,&local_520,"octal 2-byte units",0x12);
  _ZN12clap_builder7builder3arg3Arg6action17hb1056dd3e09bf4fbE(&local_520,local_7e8,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f68d1a7073227deE(local_7e8,local_ab0,&local_520);
  _ZN12clap_builder7builder3arg3Arg3new17h944ad6c753b9862eE(local_ab0,"IJK",1);
  _ZN12clap_builder7builder3arg3Arg5short17he4ece83972df5bdeE(&local_520,local_ab0,0x49);
                    /* try { // try from 0016caec to 0016cb04 has its CatchHandler @ 0016d5a9 */
  _ZN12clap_builder7builder3arg3Arg4help17h931fbd51fcb5a7e6E
            (local_ab0,&local_520,"decimal 8-byte units",0x14);
  _ZN12clap_builder7builder3arg3Arg6action17hb1056dd3e09bf4fbE(&local_520,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f68d1a7073227deE(local_ab0,local_7e8,&local_520);
  _ZN12clap_builder7builder3arg3Arg3new17h944ad6c753b9862eE(local_7e8,"LMN",1);
  _ZN12clap_builder7builder3arg3Arg5short17he4ece83972df5bdeE(&local_520,local_7e8,0x4c);
                    /* try { // try from 0016cb68 to 0016cb83 has its CatchHandler @ 0016d597 */
  _ZN12clap_builder7builder3arg3Arg4help17h931fbd51fcb5a7e6E
            (local_7e8,&local_520,"decimal 8-byte units",0x14);
  _ZN12clap_builder7builder3arg3Arg6action17hb1056dd3e09bf4fbE(&local_520,local_7e8,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f68d1a7073227deE(local_7e8,local_ab0,&local_520);
  _ZN12clap_builder7builder3arg3Arg3new17h944ad6c753b9862eE(local_ab0,"ijk",1);
  _ZN12clap_builder7builder3arg3Arg5short17he4ece83972df5bdeE(&local_520,local_ab0,0x69);
                    /* try { // try from 0016cbe7 to 0016cbff has its CatchHandler @ 0016d582 */
  _ZN12clap_builder7builder3arg3Arg4help17h931fbd51fcb5a7e6E
            (local_ab0,&local_520,"decimal 4-byte units",0x14);
  _ZN12clap_builder7builder3arg3Arg6action17hb1056dd3e09bf4fbE(&local_520,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f68d1a7073227deE(local_ab0,local_7e8,&local_520);
  _ZN12clap_builder7builder3arg3Arg3new17h944ad6c753b9862eE(local_7e8,"lmn",1);
  _ZN12clap_builder7builder3arg3Arg5short17he4ece83972df5bdeE(&local_520,local_7e8,0x6c);
                    /* try { // try from 0016cc63 to 0016cc7e has its CatchHandler @ 0016d570 */
  _ZN12clap_builder7builder3arg3Arg4help17h931fbd51fcb5a7e6E
            (local_7e8,&local_520,"decimal 8-byte units",0x14);
  _ZN12clap_builder7builder3arg3Arg6action17hb1056dd3e09bf4fbE(&local_520,local_7e8,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f68d1a7073227deE(local_7e8,local_ab0,&local_520);
  _ZN12clap_builder7builder3arg3Arg3new17h944ad6c753b9862eE(local_ab0,"xyz{|}~del",1);
  _ZN12clap_builder7builder3arg3Arg5short17he4ece83972df5bdeE(&local_520,local_ab0,0x78);
                    /* try { // try from 0016cce2 to 0016ccfa has its CatchHandler @ 0016d55b */
  _ZN12clap_builder7builder3arg3Arg4help17h931fbd51fcb5a7e6E
            (local_ab0,&local_520,"hexadecimal 2-byte units",0x18);
  _ZN12clap_builder7builder3arg3Arg6action17hb1056dd3e09bf4fbE(&local_520,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f68d1a7073227deE(local_ab0,local_7e8,&local_520);
  _ZN12clap_builder7builder3arg3Arg3new17h944ad6c753b9862eE(local_7e8,"h",1);
  _ZN12clap_builder7builder3arg3Arg5short17he4ece83972df5bdeE(&local_520,local_7e8,0x68);
                    /* try { // try from 0016cd5e to 0016cd79 has its CatchHandler @ 0016d549 */
  _ZN12clap_builder7builder3arg3Arg4help17h931fbd51fcb5a7e6E
            (local_7e8,&local_520,"hexadecimal 2-byte units",0x18);
  _ZN12clap_builder7builder3arg3Arg6action17hb1056dd3e09bf4fbE(&local_520,local_7e8,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f68d1a7073227deE(local_7e8,local_ab0,&local_520);
  _ZN12clap_builder7builder3arg3Arg3new17h944ad6c753b9862eE(local_ab0,"OPQRSTUVW",1);
  _ZN12clap_builder7builder3arg3Arg5short17he4ece83972df5bdeE(&local_520,local_ab0,0x4f);
                    /* try { // try from 0016cddd to 0016cdf5 has its CatchHandler @ 0016d534 */
  _ZN12clap_builder7builder3arg3Arg4help17h931fbd51fcb5a7e6E
            (local_ab0,&local_520,"octal 4-byte units",0x12);
  _ZN12clap_builder7builder3arg3Arg6action17hb1056dd3e09bf4fbE(&local_520,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f68d1a7073227deE(local_ab0,local_7e8,&local_520);
  _ZN12clap_builder7builder3arg3Arg3new17h944ad6c753b9862eE(local_7e8,"stuvw",1);
  _ZN12clap_builder7builder3arg3Arg5short17he4ece83972df5bdeE(&local_520,local_7e8,0x73);
                    /* try { // try from 0016ce59 to 0016ce74 has its CatchHandler @ 0016d522 */
  _ZN12clap_builder7builder3arg3Arg4help17h931fbd51fcb5a7e6E
            (local_7e8,&local_520,"decimal 2-byte units",0x14);
  _ZN12clap_builder7builder3arg3Arg6action17hb1056dd3e09bf4fbE(&local_520,local_7e8,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f68d1a7073227deE(local_7e8,local_ab0,&local_520);
  _ZN12clap_builder7builder3arg3Arg3new17h944ad6c753b9862eE(local_ab0,"XYZ[\\]^_`",1);
  _ZN12clap_builder7builder3arg3Arg5short17he4ece83972df5bdeE(&local_520,local_ab0,0x58);
                    /* try { // try from 0016ced8 to 0016cef0 has its CatchHandler @ 0016d50d */
  _ZN12clap_builder7builder3arg3Arg4help17h931fbd51fcb5a7e6E
            (local_ab0,&local_520,"hexadecimal 4-byte units",0x18);
  _ZN12clap_builder7builder3arg3Arg6action17hb1056dd3e09bf4fbE(&local_520,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f68d1a7073227deE(local_ab0,local_7e8,&local_520);
  _ZN12clap_builder7builder3arg3Arg3new17h944ad6c753b9862eE(local_7e8,"H",1);
  _ZN12clap_builder7builder3arg3Arg5short17he4ece83972df5bdeE(&local_520,local_7e8,0x48);
                    /* try { // try from 0016cf54 to 0016cf6f has its CatchHandler @ 0016d4fb */
  _ZN12clap_builder7builder3arg3Arg4help17h931fbd51fcb5a7e6E
            (local_7e8,&local_520,"hexadecimal 4-byte units",0x18);
  _ZN12clap_builder7builder3arg3Arg6action17hb1056dd3e09bf4fbE(&local_520,local_7e8,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f68d1a7073227deE(local_7e8,local_ab0,&local_520);
  _ZN12clap_builder7builder3arg3Arg3new17h944ad6c753b9862eE(local_ab0,"e",1);
  _ZN12clap_builder7builder3arg3Arg5short17he4ece83972df5bdeE(&local_520,local_ab0,0x65);
                    /* try { // try from 0016cfd3 to 0016cfeb has its CatchHandler @ 0016d4e6 */
  _ZN12clap_builder7builder3arg3Arg4help17h931fbd51fcb5a7e6E
            (local_ab0,&local_520,"floating point double precision (64-bit) units",0x2e);
  _ZN12clap_builder7builder3arg3Arg6action17hb1056dd3e09bf4fbE(&local_520,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f68d1a7073227deE(local_ab0,local_7e8,&local_520);
  _ZN12clap_builder7builder3arg3Arg3new17h944ad6c753b9862eE(local_7e8,"fg",1);
  _ZN12clap_builder7builder3arg3Arg5short17he4ece83972df5bdeE(&local_520,local_7e8,0x66);
                    /* try { // try from 0016d04f to 0016d06a has its CatchHandler @ 0016d4d4 */
  _ZN12clap_builder7builder3arg3Arg4help17h931fbd51fcb5a7e6E
            (local_7e8,&local_520,"floating point double precision (32-bit) units",0x2e);
  _ZN12clap_builder7builder3arg3Arg6action17hb1056dd3e09bf4fbE(&local_520,local_7e8,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f68d1a7073227deE(local_7e8,local_ab0,&local_520);
  _ZN12clap_builder7builder3arg3Arg3new17h944ad6c753b9862eE(local_ab0,"FG",1);
  _ZN12clap_builder7builder3arg3Arg5short17he4ece83972df5bdeE(&local_520,local_ab0,0x46);
                    /* try { // try from 0016d0ce to 0016d0e6 has its CatchHandler @ 0016d4bf */
  _ZN12clap_builder7builder3arg3Arg4help17h931fbd51fcb5a7e6E
            (local_ab0,&local_520,"floating point double precision (64-bit) units",0x2e);
  _ZN12clap_builder7builder3arg3Arg6action17hb1056dd3e09bf4fbE(&local_520,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f68d1a7073227deE(local_ab0,local_7e8,&local_520);
  _ZN12clap_builder7builder3arg3Arg3new17h944ad6c753b9862eE(local_7e8,"format",6);
  _ZN12clap_builder7builder3arg3Arg5short17he4ece83972df5bdeE(&local_520,local_7e8,0x74);
  _ZN12clap_builder7builder3arg3Arg4long17h5e292a21bf2e0846E(local_7e8,&local_520,"format",6);
                    /* try { // try from 0016d168 to 0016d1cf has its CatchHandler @ 0016d665 */
  _ZN12clap_builder7builder3arg3Arg4help17h931fbd51fcb5a7e6E
            (&local_520,local_7e8,"select output format or formats",0x1f);
  _ZN12clap_builder7builder3arg3Arg6action17hb1056dd3e09bf4fbE(local_7e8,&local_520,1);
  _ZN12clap_builder7builder3arg3Arg8num_args17h6b5d7806756338c9E(&local_520,local_7e8);
  _ZN12clap_builder7builder3arg3Arg10value_name17h2fd07fdaa472a2f2E
            (local_2a0,&local_520,&DAT_0011b200,4);
  _ZN12clap_builder7builder7command7Command3arg17h9f68d1a7073227deE(local_7e8,local_ab0,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h944ad6c753b9862eE(local_ab0,"output-duplicates",0x11);
  _ZN12clap_builder7builder3arg3Arg5short17he4ece83972df5bdeE(&local_520,local_ab0,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17h5e292a21bf2e0846E
            (local_ab0,&local_520,"output-duplicates",0x11);
                    /* try { // try from 0016d236 to 0016d251 has its CatchHandler @ 0016d4aa */
  _ZN12clap_builder7builder3arg3Arg4help17h931fbd51fcb5a7e6E
            (&local_520,local_ab0,"do not use * to mark line suppression",0x25);
  _ZN12clap_builder7builder3arg3Arg6action17hb1056dd3e09bf4fbE(local_2a0,&local_520,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f68d1a7073227deE(local_ab0,local_7e8,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h944ad6c753b9862eE(local_7e8,"width",5);
  _ZN12clap_builder7builder3arg3Arg5short17he4ece83972df5bdeE(&local_520,local_7e8,0x77);
  _ZN12clap_builder7builder3arg3Arg4long17h5e292a21bf2e0846E(local_7e8,&local_520,"width",5);
                    /* try { // try from 0016d2d6 to 0016d333 has its CatchHandler @ 0016d6b6 */
  _ZN12clap_builder7builder3arg3Arg4help17h931fbd51fcb5a7e6E
            (&local_520,local_7e8,
             "output BYTES bytes per output line. 32 is implied when BYTES is not specified.",0x4e);
  _ZN12clap_builder7builder3arg3Arg21default_missing_value17h2056f10ffc528da0E
            (local_7e8,&local_520,"32",2);
  _ZN12clap_builder7builder3arg3Arg10value_name17h2fd07fdaa472a2f2E(&local_520,local_7e8,"BYTES",5);
  _ZN12clap_builder7builder3arg3Arg8num_args17h70889333241b93cbE(local_2a0,&local_520);
  _ZN12clap_builder7builder7command7Command3arg17h9f68d1a7073227deE(local_7e8,local_ab0,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h944ad6c753b9862eE(local_ab0,"traditional",0xb);
  _ZN12clap_builder7builder3arg3Arg4long17h5e292a21bf2e0846E(&local_520,local_ab0,"traditional",0xb)
  ;
                    /* try { // try from 0016d398 to 0016d3b0 has its CatchHandler @ 0016d495 */
  _ZN12clap_builder7builder3arg3Arg4help17h931fbd51fcb5a7e6E
            (local_ab0,&local_520,"compatibility mode with one input, offset and label.  ",0x34);
  _ZN12clap_builder7builder3arg3Arg6action17hb1056dd3e09bf4fbE(&local_520,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f68d1a7073227deE(local_ab0,local_7e8,&local_520);
  _ZN12clap_builder7builder3arg3Arg3new17h944ad6c753b9862eE(local_7e8,"FILENAME",8);
  (*(code *)PTR_memcpy_0020aa28)(&local_520,local_7e8,0x278);
  local_2a8 = local_570 | 4;
  local_2a4 = local_56c;
  _ZN12clap_builder7builder3arg3Arg6action17hb1056dd3e09bf4fbE(local_7e8,&local_520,1);
                    /* try { // try from 0016d44c to 0016d45b has its CatchHandler @ 0016d483 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h26924d0645b46998E(&local_520,local_7e8);
  _ZN12clap_builder7builder7command7Command3arg17h9f68d1a7073227deE(param_1,local_ab0,&local_520);
  return param_1;
}