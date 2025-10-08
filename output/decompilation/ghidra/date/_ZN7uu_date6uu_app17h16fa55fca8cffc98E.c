undefined8 _ZN7uu_date6uu_app17h16fa55fca8cffc98E(undefined8 param_1)

{
  undefined8 uVar1;
  char *local_ac0;
  undefined8 local_ab8;
  char *local_ab0;
  undefined8 local_aa8;
  char *local_aa0;
  undefined8 local_a98;
  uint local_848;
  undefined4 local_844;
  char *local_840;
  undefined8 local_838;
  char *local_830;
  undefined8 local_828;
  char *local_820;
  undefined8 local_818;
  char *local_810;
  undefined8 local_808;
  char *local_800;
  undefined8 local_7f8;
  uint local_5c8;
  undefined4 local_5c4;
  ulong local_584;
  undefined4 local_57c;
  undefined local_578 [700];
  ulong local_2bc;
  undefined4 local_2b4;
  undefined local_2b0 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_005779f8)();
  _ZN12clap_builder7builder7command7Command3new17hab7ef2240f500938E(local_578,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h4e38d46b7dcbbb28E(&local_840,local_578);
  _ZN12clap_builder7builder7command7Command5about17ha558da4cdcdbf178E(local_578,&local_840);
                    /* try { // try from 003081e1 to 003081f7 has its CatchHandler @ 003089e9 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_00577b28)
            (&local_ac0,"{} [OPTION]... [+FORMAT]...\n{} [OPTION]... [MMDDhhmm[[CC]YY][.ss]]",0x42);
  _ZN12clap_builder7builder7command7Command14override_usage17h8376e3ddd613d2c0E
            (&local_840,local_578,&local_ac0);
  (*(code *)PTR_memcpy_00577780)(local_578,&local_840,700);
  local_2bc = local_584 | 0x8000000080;
  local_2b4 = local_57c;
  _ZN12clap_builder7builder3arg3Arg3new17h615752503a9853ffE(&local_840,"date",4);
  _ZN12clap_builder7builder3arg3Arg5short17h03e506d147b5ebc6E(&local_ac0,&local_840,100);
  _ZN12clap_builder7builder3arg3Arg4long17h39808f1106120291E(&local_840,&local_ac0,"date",4);
                    /* try { // try from 003082a2 to 003082ba has its CatchHandler @ 00308a31 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h068abcc96388e07cE
            (&local_ac0,&local_840,"STRING",6);
  (*(code *)PTR_memcpy_00577780)(&local_840,&local_ac0,0x278);
  local_5c8 = local_848 | 0x20;
  local_5c4 = local_844;
                    /* try { // try from 003082f5 to 0030830d has its CatchHandler @ 00308a31 */
  _ZN12clap_builder7builder3arg3Arg4help17h5ceb2bac26bddee0E
            (&local_ac0,&local_840,"display time described by STRING, not \'now\'",0x2b);
  _ZN12clap_builder7builder7command7Command3arg17h1ee65cc2c12a7980E(&local_840,local_578,&local_ac0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h615752503a9853ffE(local_578,"filemode",4);
  _ZN12clap_builder7builder3arg3Arg5short17h03e506d147b5ebc6E(&local_ac0,local_578,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17h39808f1106120291E(local_578,&local_ac0,"filemode",4);
                    /* try { // try from 00308377 to 003083c4 has its CatchHandler @ 00308a67 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h068abcc96388e07cE
            (&local_ac0,local_578,&DAT_001ff368,8);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h7643dd654bab30b4E(local_578,&local_ac0,3);
  _ZN12clap_builder7builder3arg3Arg4help17h5ceb2bac26bddee0E
            (&local_ac0,local_578,"like --date; once for each line of DATEFILE",0x2b);
  _ZN12clap_builder7builder7command7Command3arg17h1ee65cc2c12a7980E(local_578,&local_840,&local_ac0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h615752503a9853ffE(&local_840,&DAT_001ff620,8);
  _ZN12clap_builder7builder3arg3Arg5short17h03e506d147b5ebc6E(&local_ac0,&local_840,0x49);
  _ZN12clap_builder7builder3arg3Arg4long17h39808f1106120291E(&local_840,&local_ac0,&DAT_001ff620,8);
                    /* try { // try from 0030842e to 00308446 has its CatchHandler @ 00308a55 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h068abcc96388e07cE(&local_ac0,&local_840,"FMT",3);
  local_840 = "date";
  local_838 = 4;
  local_830 = "hours";
  local_828 = 5;
  local_820 = "minutes";
  local_818 = 7;
  local_810 = "seconds";
  local_808 = 7;
  local_800 = "ns";
  local_7f8 = 2;
                    /* try { // try from 003084c7 to 003084db has its CatchHandler @ 003089da */
  _ZN117__LT_uucore__features__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17haf7d63bc573d8470E
            (local_2b0,&local_840);
                    /* try { // try from 003084dc to 003084f5 has its CatchHandler @ 003089d8 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h2f6235d1ac0059eaE
            (&local_840,&local_ac0,local_2b0);
  _ZN12clap_builder7builder3arg3Arg8num_args17h181a76feb0251421E(&local_ac0,&local_840,0,1);
                    /* try { // try from 00308512 to 0030853f has its CatchHandler @ 00308a55 */
  _ZN12clap_builder7builder3arg3Arg21default_missing_value17h4cd694e0875710c2E
            (&local_840,&local_ac0);
  _ZN12clap_builder7builder3arg3Arg4help17h5ceb2bac26bddee0E
            (&local_ac0,&local_840,
             "output date/time in ISO 8601 format.\n FMT=\'date\' for date only (the default),\n \'hours\', \'minutes\', \'seconds\', or \'ns\'\n for date and time to the indicated precision.\n Example: 2006-08-14T02:34:56-06:00"
             ,200);
  _ZN12clap_builder7builder7command7Command3arg17h1ee65cc2c12a7980E(&local_840,local_578,&local_ac0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h615752503a9853ffE(local_578,"rfc-email",9);
  _ZN12clap_builder7builder3arg3Arg5short17h03e506d147b5ebc6E(&local_ac0,local_578,0x52);
  _ZN12clap_builder7builder3arg3Arg4long17h39808f1106120291E(local_578,&local_ac0,"rfc-email",9);
                    /* try { // try from 003085a9 to 003085c1 has its CatchHandler @ 003089c3 */
  _ZN12clap_builder7builder3arg3Arg4help17h5ceb2bac26bddee0E
            (&local_ac0,local_578,
             "output date and time in RFC 5322 format.\n Example: Mon, 14 Aug 2006 02:34:56 -0600",
             0x52);
  _ZN12clap_builder7builder3arg3Arg6action17h7ed963dcd895ff95E(local_2b0,&local_ac0);
  _ZN12clap_builder7builder7command7Command3arg17h1ee65cc2c12a7980E(local_578,&local_840,local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17h615752503a9853ffE(&local_840,"rfc-3339",8);
  _ZN12clap_builder7builder3arg3Arg4long17h39808f1106120291E(&local_ac0,&local_840,"rfc-3339",8);
                    /* try { // try from 00308626 to 00308641 has its CatchHandler @ 00308a1f */
  _ZN12clap_builder7builder3arg3Arg10value_name17h068abcc96388e07cE(&local_840,&local_ac0,"FMT",3);
  local_ac0 = "date";
  local_ab8 = 4;
  local_ab0 = "seconds";
  local_aa8 = 7;
  local_aa0 = "ns";
  local_a98 = 2;
                    /* try { // try from 0030866c to 0030867d has its CatchHandler @ 003089b1 */
  _ZN117__LT_uucore__features__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17h8934af1115705cfcE
            (local_2b0,&local_ac0);
                    /* try { // try from 0030867e to 00308697 has its CatchHandler @ 003089af */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h2f6235d1ac0059eaE
            (&local_ac0,&local_840,local_2b0);
                    /* try { // try from 00308698 to 003086b5 has its CatchHandler @ 00308a1f */
  _ZN12clap_builder7builder3arg3Arg4help17h5ceb2bac26bddee0E
            (local_2b0,&local_ac0,
             "output date/time in RFC 3339 format.\n FMT=\'date\', \'seconds\', or \'ns\'\n for date and time to the indicated precision.\n Example: 2006-08-14 02:34:56-06:00"
             ,0x97);
  _ZN12clap_builder7builder7command7Command3arg17h1ee65cc2c12a7980E(&local_840,local_578,local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17h615752503a9853ffE(local_578,"debug",5);
  _ZN12clap_builder7builder3arg3Arg4long17h39808f1106120291E(&local_ac0,local_578,"debug",5);
                    /* try { // try from 0030870a to 00308725 has its CatchHandler @ 0030899a */
  _ZN12clap_builder7builder3arg3Arg4help17h5ceb2bac26bddee0E
            (local_578,&local_ac0,
             "annotate the parsed date, and warn about questionable usage to stderr",0x45);
  _ZN12clap_builder7builder3arg3Arg6action17h7ed963dcd895ff95E(&local_ac0,local_578);
  _ZN12clap_builder7builder7command7Command3arg17h1ee65cc2c12a7980E(local_578,&local_840,&local_ac0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h615752503a9853ffE(&local_840,"reference",9);
  _ZN12clap_builder7builder3arg3Arg5short17h03e506d147b5ebc6E(&local_ac0,&local_840,0x72);
  _ZN12clap_builder7builder3arg3Arg4long17h39808f1106120291E(&local_840,&local_ac0,"reference",9);
                    /* try { // try from 003087a2 to 003087ef has its CatchHandler @ 00308a43 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h068abcc96388e07cE
            (&local_ac0,&local_840,&DAT_001fdc9c,4);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h7643dd654bab30b4E(&local_840,&local_ac0,2);
  _ZN12clap_builder7builder3arg3Arg4help17h5ceb2bac26bddee0E
            (&local_ac0,&local_840,"display the last modification time of FILE",0x2a);
  _ZN12clap_builder7builder7command7Command3arg17h1ee65cc2c12a7980E(&local_840,local_578,&local_ac0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h615752503a9853ffE(local_578,"set",3);
  _ZN12clap_builder7builder3arg3Arg5short17h03e506d147b5ebc6E(&local_ac0,local_578,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17h39808f1106120291E(local_578,&local_ac0,"set",3);
                    /* try { // try from 00308859 to 0030888f has its CatchHandler @ 00308a0d */
  _ZN12clap_builder7builder3arg3Arg10value_name17h068abcc96388e07cE(&local_ac0,local_578,"STRING",6)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17h5ceb2bac26bddee0E
            (local_2b0,&local_ac0,"set time described by STRING",0x1c);
  _ZN12clap_builder7builder7command7Command3arg17h1ee65cc2c12a7980E(local_578,&local_840,local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17h615752503a9853ffE(&local_840,"universal",9);
  _ZN12clap_builder7builder3arg3Arg5short17h03e506d147b5ebc6E(&local_ac0,&local_840,0x75);
  _ZN12clap_builder7builder3arg3Arg4long17h39808f1106120291E(&local_840,&local_ac0,"universal",9);
                    /* try { // try from 003088fc to 00308926 has its CatchHandler @ 003089fb */
  _ZN12clap_builder7builder3arg3Arg5alias17h4d0fb02b01cfb723E(&local_ac0,&local_840);
  _ZN12clap_builder7builder3arg3Arg4help17h5ceb2bac26bddee0E
            (&local_840,&local_ac0,"print or set Coordinated Universal Time (UTC)",0x2d);
  _ZN12clap_builder7builder3arg3Arg6action17h7ed963dcd895ff95E(&local_ac0,&local_840);
  _ZN12clap_builder7builder7command7Command3arg17h1ee65cc2c12a7980E(&local_840,local_578,&local_ac0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h615752503a9853ffE(local_578,"format",6);
  _ZN12clap_builder7builder7command7Command3arg17h1ee65cc2c12a7980E(param_1,&local_840,local_578);
  return param_1;
}