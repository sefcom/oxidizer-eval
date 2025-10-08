undefined8 _ZN5uu_id6uu_app17h29c9bf865c558e60E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_ac0 [640];
  char *local_840;
  undefined8 local_838;
  undefined *local_830;
  undefined8 local_828;
  char *local_820;
  undefined8 local_818;
  char *local_810;
  undefined8 local_808;
  char *local_800;
  undefined8 local_7f8;
  char *local_7f0;
  undefined8 local_7e8;
  undefined local_5c0 [700];
  ulong local_304;
  undefined4 local_2fc;
  undefined local_2f8 [700];
  ulong local_3c;
  undefined4 local_34;
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001ef840)();
  _ZN12clap_builder7builder7command7Command3new17h6fdca7e27d29c898E(local_5c0,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h99481c1494a4826cE(local_2f8,local_5c0);
  _ZN12clap_builder7builder7command7Command5about17h24aae7a90b7c5459E(local_5c0,local_2f8);
                    /* try { // try from 0015c930 to 0015c946 has its CatchHandler @ 0015d230 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001ef9a0)
            (local_ac0,"{} [OPTION]... [USER]...",0x18);
  _ZN12clap_builder7builder7command7Command14override_usage17h0d6bdbde830e1b1bE
            (local_2f8,local_5c0,local_ac0);
  (*(code *)PTR_memcpy_001ef778)(local_5c0,local_2f8,700);
  local_304 = local_3c | 0x8800000088;
  local_2fc = local_34;
  _ZN12clap_builder7builder3arg3Arg3new17h1fb1e568bfe0d796E(local_2f8,"audit",5);
  _ZN12clap_builder7builder3arg3Arg5short17hbde74119a3cc74a8E(local_ac0,local_2f8,0x41);
  local_840 = "group";
  local_838 = 5;
  local_830 = &DAT_00118938;
  local_828 = 4;
  local_820 = "human-readable";
  local_818 = 0xe;
  local_810 = "password";
  local_808 = 8;
  local_800 = "groups";
  local_7f8 = 6;
  local_7f0 = &DAT_00118968;
  local_7e8 = 4;
                    /* try { // try from 0015ca75 to 0015caaa has its CatchHandler @ 0015d2ae */
  _ZN12clap_builder7builder3arg3Arg18conflicts_with_all17ha22caf8ba8cfeef0E
            (local_2f8,local_ac0,&local_840);
  _ZN12clap_builder7builder3arg3Arg4help17h4434d375747c7e6dE
            (local_ac0,local_2f8,
             "Display the process audit user ID and other process audit properties,\nwhich requires privilege (not available on Linux)."
             ,0x78);
  _ZN12clap_builder7builder3arg3Arg6action17h01f838898fb925b5E(&local_840,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17hb9295a6f98fbc68aE(local_2f8,local_5c0,&local_840);
  _ZN12clap_builder7builder3arg3Arg3new17h1fb1e568bfe0d796E(local_5c0,&DAT_00118938,4);
  _ZN12clap_builder7builder3arg3Arg5short17hbde74119a3cc74a8E(local_ac0,local_5c0,0x75);
  _ZN12clap_builder7builder3arg3Arg4long17h6a1bc9f61ee80badE(local_5c0,local_ac0,&DAT_00118938,4);
                    /* try { // try from 0015cb2c to 0015cb62 has its CatchHandler @ 0015d29c */
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h50c74f617783391eE
            (local_ac0,local_5c0,"group",5);
  _ZN12clap_builder7builder3arg3Arg4help17h4434d375747c7e6dE
            (local_5c0,local_ac0,"Display only the effective user ID as a number.",0x2f);
  _ZN12clap_builder7builder3arg3Arg6action17h01f838898fb925b5E(local_ac0,local_5c0,2);
  _ZN12clap_builder7builder7command7Command3arg17hb9295a6f98fbc68aE(local_5c0,local_2f8,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h1fb1e568bfe0d796E(local_2f8,"group",5);
  _ZN12clap_builder7builder3arg3Arg5short17hbde74119a3cc74a8E(local_ac0,local_2f8,0x67);
  _ZN12clap_builder7builder3arg3Arg4long17h6a1bc9f61ee80badE(local_2f8,local_ac0,"group",5);
                    /* try { // try from 0015cbe8 to 0015cc21 has its CatchHandler @ 0015d28a */
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h50c74f617783391eE
            (local_ac0,local_2f8,&DAT_00118938,4);
  _ZN12clap_builder7builder3arg3Arg4help17h4434d375747c7e6dE
            (local_2f8,local_ac0,"Display only the effective group ID as a number",0x2f);
  _ZN12clap_builder7builder3arg3Arg6action17h01f838898fb925b5E(local_ac0,local_2f8,2);
  _ZN12clap_builder7builder7command7Command3arg17hb9295a6f98fbc68aE(local_2f8,local_5c0,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h1fb1e568bfe0d796E(local_5c0,"groups",6);
  _ZN12clap_builder7builder3arg3Arg5short17hbde74119a3cc74a8E(local_ac0,local_5c0,0x47);
  _ZN12clap_builder7builder3arg3Arg4long17h6a1bc9f61ee80badE(local_5c0,local_ac0,"groups",6);
  local_840 = "group";
  local_838 = 5;
  local_830 = &DAT_00118938;
  local_828 = 4;
  local_820 = "context";
  local_818 = 7;
  local_810 = "human-readable";
  local_808 = 0xe;
  local_800 = "password";
  local_7f8 = 8;
  local_7f0 = "audit";
  local_7e8 = 5;
                    /* try { // try from 0015cd30 to 0015cd62 has its CatchHandler @ 0015d278 */
  _ZN12clap_builder7builder3arg3Arg18conflicts_with_all17ha22caf8ba8cfeef0E
            (local_ac0,local_5c0,&local_840);
  _ZN12clap_builder7builder3arg3Arg4help17h4434d375747c7e6dE
            (local_5c0,local_ac0,
             "Display only the different group IDs as white-space separated numbers, in no particular order."
             ,0x5e);
  _ZN12clap_builder7builder3arg3Arg6action17h01f838898fb925b5E(local_ac0,local_5c0,2);
  _ZN12clap_builder7builder7command7Command3arg17hb9295a6f98fbc68aE(local_5c0,local_2f8,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h1fb1e568bfe0d796E(local_2f8,"human-readable",0xe);
  _ZN12clap_builder7builder3arg3Arg5short17hbde74119a3cc74a8E(local_ac0,local_2f8,0x70);
                    /* try { // try from 0015cdc6 to 0015cde1 has its CatchHandler @ 0015d21b */
  _ZN12clap_builder7builder3arg3Arg4help17h4434d375747c7e6dE
            (local_2f8,local_ac0,
             "Make the output human-readable. Each display is on a separate line.",0x43);
  _ZN12clap_builder7builder3arg3Arg6action17h01f838898fb925b5E(local_ac0,local_2f8,2);
  _ZN12clap_builder7builder7command7Command3arg17hb9295a6f98fbc68aE(local_2f8,local_5c0,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h1fb1e568bfe0d796E(local_5c0,&DAT_00118988,4);
  _ZN12clap_builder7builder3arg3Arg5short17hbde74119a3cc74a8E(local_ac0,local_5c0,0x6e);
  _ZN12clap_builder7builder3arg3Arg4long17h6a1bc9f61ee80badE(local_5c0,local_ac0,&DAT_00118988,4);
                    /* try { // try from 0015ce63 to 0015ce7b has its CatchHandler @ 0015d206 */
  _ZN12clap_builder7builder3arg3Arg4help17h4434d375747c7e6dE
            (local_ac0,local_5c0,
             "Display the name of the user or group ID for the -G, -g and -u options instead of the number.\nIf any of the ID numbers cannot be mapped into names, the number will be displayed as usual."
             ,0xba);
  _ZN12clap_builder7builder3arg3Arg6action17h01f838898fb925b5E(&local_840,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17hb9295a6f98fbc68aE(local_5c0,local_2f8,&local_840);
  _ZN12clap_builder7builder3arg3Arg3new17h1fb1e568bfe0d796E(local_2f8,"password",8);
  _ZN12clap_builder7builder3arg3Arg5short17hbde74119a3cc74a8E(local_ac0,local_2f8,0x50);
                    /* try { // try from 0015cedf to 0015cf18 has its CatchHandler @ 0015d266 */
  _ZN12clap_builder7builder3arg3Arg4help17h4434d375747c7e6dE
            (local_2f8,local_ac0,"Display the id as a password file entry.",0x28);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h50c74f617783391eE
            (local_ac0,local_2f8,"human-readable",0xe);
  _ZN12clap_builder7builder3arg3Arg6action17h01f838898fb925b5E(&local_840,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17hb9295a6f98fbc68aE(local_2f8,local_5c0,&local_840);
  _ZN12clap_builder7builder3arg3Arg3new17h1fb1e568bfe0d796E(local_5c0,&DAT_00118928,4);
  _ZN12clap_builder7builder3arg3Arg5short17hbde74119a3cc74a8E(local_ac0,local_5c0,0x72);
  _ZN12clap_builder7builder3arg3Arg4long17h6a1bc9f61ee80badE(local_5c0,local_ac0,&DAT_00118928,4);
                    /* try { // try from 0015cf9a to 0015cfb2 has its CatchHandler @ 0015d1f1 */
  _ZN12clap_builder7builder3arg3Arg4help17h4434d375747c7e6dE
            (local_ac0,local_5c0,
             "Display the real ID for the -G, -g and -u options instead of the effective ID.",0x4e);
  _ZN12clap_builder7builder3arg3Arg6action17h01f838898fb925b5E(&local_840,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17hb9295a6f98fbc68aE(local_5c0,local_2f8,&local_840);
  _ZN12clap_builder7builder3arg3Arg3new17h1fb1e568bfe0d796E(local_2f8,&DAT_00118968,4);
  _ZN12clap_builder7builder3arg3Arg5short17hbde74119a3cc74a8E(local_ac0,local_2f8,0x7a);
  _ZN12clap_builder7builder3arg3Arg4long17h6a1bc9f61ee80badE(local_2f8,local_ac0,&DAT_00118968,4);
                    /* try { // try from 0015d034 to 0015d04c has its CatchHandler @ 0015d1dc */
  _ZN12clap_builder7builder3arg3Arg4help17h4434d375747c7e6dE
            (local_ac0,local_2f8,
             "delimit entries with NUL characters, not whitespace;\nnot permitted in default format"
             ,0x54);
  _ZN12clap_builder7builder3arg3Arg6action17h01f838898fb925b5E(&local_840,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17hb9295a6f98fbc68aE(local_2f8,local_5c0,&local_840);
  _ZN12clap_builder7builder3arg3Arg3new17h1fb1e568bfe0d796E(local_5c0,"context",7);
  _ZN12clap_builder7builder3arg3Arg5short17hbde74119a3cc74a8E(local_ac0,local_5c0,0x5a);
  _ZN12clap_builder7builder3arg3Arg4long17h6a1bc9f61ee80badE(local_5c0,local_ac0,"context",7);
  local_840 = "group";
  local_838 = 5;
  local_830 = &DAT_00118938;
  local_828 = 4;
                    /* try { // try from 0015d0f6 to 0015d128 has its CatchHandler @ 0015d254 */
  _ZN12clap_builder7builder3arg3Arg18conflicts_with_all17h9bd4b71022810100E
            (local_ac0,local_5c0,&local_840);
  _ZN12clap_builder7builder3arg3Arg4help17h4434d375747c7e6dE
            (local_5c0,local_ac0,"print only the security context of the process (not enabled)",0x3c
            );
  _ZN12clap_builder7builder3arg3Arg6action17h01f838898fb925b5E(local_ac0,local_5c0,2);
  _ZN12clap_builder7builder7command7Command3arg17hb9295a6f98fbc68aE(local_5c0,local_2f8,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h1fb1e568bfe0d796E(local_2f8,&DAT_00118984,4);
  _ZN12clap_builder7builder3arg3Arg6action17h01f838898fb925b5E(local_ac0,local_2f8,1);
                    /* try { // try from 0015d18c to 0015d1ad has its CatchHandler @ 0015d242 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h87d77aa84454cffdE(local_2f8,local_ac0);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h0c7daf62b200c2b4E(local_ac0,local_2f8);
  _ZN12clap_builder7builder7command7Command3arg17hb9295a6f98fbc68aE(param_1,local_5c0,local_ac0);
  return param_1;
}