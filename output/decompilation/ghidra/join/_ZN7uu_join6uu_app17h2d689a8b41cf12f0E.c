undefined8 _ZN7uu_join6uu_app17h2d689a8b41cf12f0E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a58 [584];
  uint local_810;
  undefined4 local_80c;
  undefined local_808 [584];
  uint local_5c0;
  undefined4 local_5bc;
  ulong local_54c;
  undefined4 local_544;
  undefined local_540 [584];
  uint local_2f8;
  undefined4 local_2f4;
  ulong local_284;
  undefined4 local_27c;
  char *local_278;
  undefined8 local_270;
  char *local_268;
  undefined8 local_260;
  uint local_30;
  undefined4 local_2c;
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17hf0c7b4d468a90a92E(local_540,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h683d8a8d79e1c2bbE
            (local_808,local_540,"0.0.28",6);
  _ZN12clap_builder7builder7command7Command5about17h9ff7c73dacacbe10E
            (local_540,local_808,
             "For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input."
             ,0xd4);
                    /* try { // try from 001c4687 to 001c469b has its CatchHandler @ 001c506c */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(auStack_a58,"{} [OPTION]... FILE1 FILE2",0x1a);
  _ZN12clap_builder7builder7command7Command14override_usage17h9779d504759106a2E
            (local_808,local_540,auStack_a58);
  (*(code *)PTR_memcpy_002392b0)(local_540,local_808,700);
  local_284 = local_54c | 0x8000000080;
  local_27c = local_544;
                    /* try { // try from 001c46f5 to 001c47ce has its CatchHandler @ 001c5192 */
  _ZN12clap_builder7builder3arg3Arg3new17h2c97ede5852b6623E(local_808,"a",1);
  _ZN12clap_builder7builder3arg3Arg5short17hbc137961c5dd4bafE(auStack_a58,local_808,0x61);
  _ZN12clap_builder7builder3arg3Arg6action17h0ec8734b3bda57faE(local_808,auStack_a58,1);
  _ZN12clap_builder7builder3arg3Arg8num_args17h3ff65f816ed627adE(auStack_a58,local_808);
  local_278 = "1";
  local_270 = 1;
  local_268 = "2";
  local_260 = 1;
  _ZN12clap_builder7builder3arg3Arg12value_parser17hc79b09d5fad8d665E
            (local_808,auStack_a58,&local_278);
  _ZN12clap_builder7builder3arg3Arg10value_name17ha21116e1d570c277E
            (auStack_a58,local_808,"FILENUM",7);
  _ZN12clap_builder7builder3arg3Arg4help17hbf0c46bcb54f3f56E
            (&local_278,auStack_a58,
             "also print unpairable lines from file FILENUM, where\nFILENUM is 1 or 2, corresponding to FILE1 or FILE2"
             ,0x67);
  _ZN12clap_builder7builder7command7Command3arg17h78b924fdfa0d19fbE(local_808,local_540,&local_278);
                    /* try { // try from 001c47ec to 001c48b7 has its CatchHandler @ 001c5180 */
  _ZN12clap_builder7builder3arg3Arg3new17h2c97ede5852b6623E(local_540,"v",1);
  _ZN12clap_builder7builder3arg3Arg5short17hbc137961c5dd4bafE(auStack_a58,local_540,0x76);
  _ZN12clap_builder7builder3arg3Arg6action17h0ec8734b3bda57faE(local_540,auStack_a58,1);
  _ZN12clap_builder7builder3arg3Arg8num_args17h3ff65f816ed627adE(auStack_a58,local_540);
  local_278 = "1";
  local_270 = 1;
  local_268 = "2";
  local_260 = 1;
  _ZN12clap_builder7builder3arg3Arg12value_parser17hc79b09d5fad8d665E
            (local_540,auStack_a58,&local_278);
  _ZN12clap_builder7builder3arg3Arg10value_name17ha21116e1d570c277E
            (auStack_a58,local_540,"FILENUM",7);
  _ZN12clap_builder7builder3arg3Arg4help17hbf0c46bcb54f3f56E
            (&local_278,auStack_a58,"like -a FILENUM, but suppress joined output lines",0x31);
  _ZN12clap_builder7builder7command7Command3arg17h78b924fdfa0d19fbE(local_540,local_808,&local_278);
                    /* try { // try from 001c48d5 to 001c493d has its CatchHandler @ 001c515c */
  _ZN12clap_builder7builder3arg3Arg3new17h2c97ede5852b6623E(local_808,"e",1);
  _ZN12clap_builder7builder3arg3Arg5short17hbc137961c5dd4bafE(auStack_a58,local_808,0x65);
  _ZN12clap_builder7builder3arg3Arg10value_name17ha21116e1d570c277E(local_808,auStack_a58,"EMPTY",5)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17hbf0c46bcb54f3f56E
            (auStack_a58,local_808,"replace missing input fields with EMPTY",0x27);
  _ZN12clap_builder7builder7command7Command3arg17h78b924fdfa0d19fbE(local_808,local_540,auStack_a58)
  ;
                    /* try { // try from 001c4956 to 001c49be has its CatchHandler @ 001c514a */
  _ZN12clap_builder7builder3arg3Arg3new17h2c97ede5852b6623E(local_540,"i",1);
  _ZN12clap_builder7builder3arg3Arg5short17hbc137961c5dd4bafE(auStack_a58,local_540,0x69);
  _ZN12clap_builder7builder3arg3Arg4long17h7ad96478866e1a90E
            (local_540,auStack_a58,"ignore-case",0xb);
  _ZN12clap_builder7builder3arg3Arg4help17hbf0c46bcb54f3f56E
            (auStack_a58,local_540,"ignore differences in case when comparing fields",0x30);
  _ZN12clap_builder7builder3arg3Arg6action17h0ec8734b3bda57faE(&local_278,auStack_a58,2);
  _ZN12clap_builder7builder7command7Command3arg17h78b924fdfa0d19fbE(local_540,local_808,&local_278);
                    /* try { // try from 001c49ef to 001c4a57 has its CatchHandler @ 001c5138 */
  _ZN12clap_builder7builder3arg3Arg3new17h2c97ede5852b6623E(local_808,"j",1);
  _ZN12clap_builder7builder3arg3Arg5short17hbc137961c5dd4bafE(auStack_a58,local_808,0x6a);
  _ZN12clap_builder7builder3arg3Arg10value_name17ha21116e1d570c277E(local_808,auStack_a58,"FIELD",5)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17hbf0c46bcb54f3f56E
            (auStack_a58,local_808,"equivalent to \'-1 FIELD -2 FIELD\'",0x21);
  _ZN12clap_builder7builder7command7Command3arg17h78b924fdfa0d19fbE(local_808,local_540,auStack_a58)
  ;
                    /* try { // try from 001c4a70 to 001c4ad8 has its CatchHandler @ 001c5126 */
  _ZN12clap_builder7builder3arg3Arg3new17h2c97ede5852b6623E(local_540,"o",1);
  _ZN12clap_builder7builder3arg3Arg5short17hbc137961c5dd4bafE(auStack_a58,local_540,0x6f);
  _ZN12clap_builder7builder3arg3Arg10value_name17ha21116e1d570c277E
            (local_540,auStack_a58,"FORMAT",6);
  _ZN12clap_builder7builder3arg3Arg4help17hbf0c46bcb54f3f56E
            (auStack_a58,local_540,"obey FORMAT while constructing output line",0x2a);
  _ZN12clap_builder7builder7command7Command3arg17h78b924fdfa0d19fbE(local_540,local_808,auStack_a58)
  ;
                    /* try { // try from 001c4af1 to 001c4b7d has its CatchHandler @ 001c516e */
  _ZN12clap_builder7builder3arg3Arg3new17h2c97ede5852b6623E(local_808,"t",1);
  _ZN12clap_builder7builder3arg3Arg5short17hbc137961c5dd4bafE(auStack_a58,local_808,0x74);
  _ZN12clap_builder7builder3arg3Arg10value_name17ha21116e1d570c277E
            (local_808,auStack_a58,&DAT_0010b750,4);
  local_278 = (char *)0x2;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h77c891e8728d4758E
            (auStack_a58,local_808,&local_278);
  _ZN12clap_builder7builder3arg3Arg4help17hbf0c46bcb54f3f56E
            (&local_278,auStack_a58,"use CHAR as input and output field separator",0x2c);
  _ZN12clap_builder7builder7command7Command3arg17h78b924fdfa0d19fbE(local_808,local_540,&local_278);
                    /* try { // try from 001c4b9b to 001c4c03 has its CatchHandler @ 001c5114 */
  _ZN12clap_builder7builder3arg3Arg3new17h2c97ede5852b6623E(local_540,"1",1);
  _ZN12clap_builder7builder3arg3Arg5short17hbc137961c5dd4bafE(auStack_a58,local_540,0x31);
  _ZN12clap_builder7builder3arg3Arg10value_name17ha21116e1d570c277E(local_540,auStack_a58,"FIELD",5)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17hbf0c46bcb54f3f56E
            (auStack_a58,local_540,"join on this FIELD of file 1",0x1c);
  _ZN12clap_builder7builder7command7Command3arg17h78b924fdfa0d19fbE(local_540,local_808,auStack_a58)
  ;
                    /* try { // try from 001c4c1c to 001c4c84 has its CatchHandler @ 001c50ff */
  _ZN12clap_builder7builder3arg3Arg3new17h2c97ede5852b6623E(local_808,"2",1);
  _ZN12clap_builder7builder3arg3Arg5short17hbc137961c5dd4bafE(auStack_a58,local_808,0x32);
  _ZN12clap_builder7builder3arg3Arg10value_name17ha21116e1d570c277E(local_808,auStack_a58,"FIELD",5)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17hbf0c46bcb54f3f56E
            (auStack_a58,local_808,"join on this FIELD of file 2",0x1c);
  _ZN12clap_builder7builder7command7Command3arg17h78b924fdfa0d19fbE(local_808,local_540,auStack_a58)
  ;
                    /* try { // try from 001c4c9d to 001c4ced has its CatchHandler @ 001c50ea */
  _ZN12clap_builder7builder3arg3Arg3new17h2c97ede5852b6623E(local_540,"check-order",0xb);
  _ZN12clap_builder7builder3arg3Arg4long17h7ad96478866e1a90E
            (auStack_a58,local_540,"check-order",0xb);
  _ZN12clap_builder7builder3arg3Arg4help17hbf0c46bcb54f3f56E
            (local_540,auStack_a58,
             "check that the input is correctly sorted, even if all input lines are pairable",0x4e);
  _ZN12clap_builder7builder3arg3Arg6action17h0ec8734b3bda57faE(auStack_a58,local_540,2);
  _ZN12clap_builder7builder7command7Command3arg17h78b924fdfa0d19fbE(local_540,local_808,auStack_a58)
  ;
                    /* try { // try from 001c4d1e to 001c4d6e has its CatchHandler @ 001c50d5 */
  _ZN12clap_builder7builder3arg3Arg3new17h2c97ede5852b6623E(local_808,"nocheck-order",0xd);
  _ZN12clap_builder7builder3arg3Arg4long17h7ad96478866e1a90E
            (auStack_a58,local_808,"nocheck-order",0xd);
  _ZN12clap_builder7builder3arg3Arg4help17hbf0c46bcb54f3f56E
            (local_808,auStack_a58,"do not check that the input is correctly sorted",0x2f);
  _ZN12clap_builder7builder3arg3Arg6action17h0ec8734b3bda57faE(auStack_a58,local_808,2);
  _ZN12clap_builder7builder7command7Command3arg17h78b924fdfa0d19fbE(local_808,local_540,auStack_a58)
  ;
                    /* try { // try from 001c4d9f to 001c4def has its CatchHandler @ 001c50c0 */
  _ZN12clap_builder7builder3arg3Arg3new17h2c97ede5852b6623E(local_540,"header",6);
  _ZN12clap_builder7builder3arg3Arg4long17h7ad96478866e1a90E(auStack_a58,local_540,"header",6);
  _ZN12clap_builder7builder3arg3Arg4help17hbf0c46bcb54f3f56E
            (local_540,auStack_a58,
             "treat the first line in each file as field headers, print them without trying to pair them"
             ,0x5a);
  _ZN12clap_builder7builder3arg3Arg6action17h0ec8734b3bda57faE(auStack_a58,local_540,2);
  _ZN12clap_builder7builder7command7Command3arg17h78b924fdfa0d19fbE(local_540,local_808,auStack_a58)
  ;
                    /* try { // try from 001c4e20 to 001c4e88 has its CatchHandler @ 001c50ab */
  _ZN12clap_builder7builder3arg3Arg3new17h2c97ede5852b6623E(local_808,"z",1);
  _ZN12clap_builder7builder3arg3Arg5short17hbc137961c5dd4bafE(auStack_a58,local_808,0x7a);
  _ZN12clap_builder7builder3arg3Arg4long17h7ad96478866e1a90E
            (local_808,auStack_a58,"zero-terminated",0xf);
  _ZN12clap_builder7builder3arg3Arg4help17hbf0c46bcb54f3f56E
            (auStack_a58,local_808,"line delimiter is NUL, not newline",0x22);
  _ZN12clap_builder7builder3arg3Arg6action17h0ec8734b3bda57faE(&local_278,auStack_a58,2);
  _ZN12clap_builder7builder7command7Command3arg17h78b924fdfa0d19fbE(local_808,local_540,&local_278);
                    /* try { // try from 001c4eb9 to 001c4ed1 has its CatchHandler @ 001c5096 */
  _ZN12clap_builder7builder3arg3Arg3new17h2c97ede5852b6623E(local_540,"file1",5);
  (*(code *)PTR_memcpy_002392b0)(auStack_a58,local_540,0x248);
  local_810 = local_2f8 | 1;
  local_80c = local_2f4;
                    /* try { // try from 001c4f0a to 001c4f3a has its CatchHandler @ 001c5096 */
  _ZN12clap_builder7builder3arg3Arg10value_name17ha21116e1d570c277E(local_540,auStack_a58,"FILE1",5)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_hint17hdbe3a0d87f468a76E(auStack_a58,local_540,3);
  (*(code *)PTR_memcpy_002392b0)(&local_278,auStack_a58,0x248);
  local_30 = local_810 | 4;
  local_2c = local_80c;
  _ZN12clap_builder7builder7command7Command3arg17h78b924fdfa0d19fbE(local_540,local_808,&local_278);
                    /* try { // try from 001c4f8b to 001c4fa3 has its CatchHandler @ 001c5081 */
  _ZN12clap_builder7builder3arg3Arg3new17h2c97ede5852b6623E(local_808,"file2",5);
  (*(code *)PTR_memcpy_002392b0)(auStack_a58,local_808,0x248);
  local_810 = local_5c0 | 1;
  local_80c = local_5bc;
                    /* try { // try from 001c4fdc to 001c500c has its CatchHandler @ 001c5081 */
  _ZN12clap_builder7builder3arg3Arg10value_name17ha21116e1d570c277E
            (local_808,auStack_a58,
             "FILE2incompatible join fields , invalid field number: invalid file number: ",5);
  _ZN12clap_builder7builder3arg3Arg10value_hint17hdbe3a0d87f468a76E(auStack_a58,local_808,3);
  (*(code *)PTR_memcpy_002392b0)(local_808,auStack_a58,0x248);
  local_5c0 = local_810 | 4;
  local_5bc = local_80c;
  _ZN12clap_builder7builder7command7Command3arg17h78b924fdfa0d19fbE(param_1,local_540,local_808);
  return param_1;
}