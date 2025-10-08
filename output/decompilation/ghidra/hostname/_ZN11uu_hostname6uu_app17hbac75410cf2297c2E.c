undefined8 _ZN11uu_hostname6uu_app17hbac75410cf2297c2E(undefined8 param_1)

{
  undefined8 uVar1;
  char *local_888;
  undefined8 local_880;
  char *local_878;
  undefined8 local_870;
  undefined *local_868;
  undefined8 local_860;
  char *local_858;
  undefined8 local_850;
  undefined8 local_848;
  undefined local_840 [700];
  ulong local_584;
  undefined4 local_57c;
  undefined local_578 [640];
  undefined local_2f8 [700];
  ulong local_3c;
  undefined4 local_34;
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001eb710)();
  _ZN12clap_builder7builder7command7Command3new17hc325de5984117be7E(local_840,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h62e7302f22f51a46E(local_2f8,local_840);
  _ZN12clap_builder7builder7command7Command5about17h2ddc4d412944c7c8E(local_840,local_2f8);
                    /* try { // try from 001583ea to 00158403 has its CatchHandler @ 0015886c */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001eb900)
            (local_578,"{} [OPTION]... [HOSTNAME]",0x19);
  local_848 = param_1;
  _ZN12clap_builder7builder7command7Command14override_usage17h51f810bd2c042f7aE
            (local_2f8,local_840,local_578);
  (*(code *)PTR_memcpy_001eb808)(local_840,local_2f8,700);
  local_584 = local_3c | 0x8000000080;
  local_57c = local_34;
  _ZN12clap_builder7builder3arg3Arg3new17had866788d0e1e168E(local_2f8,"domain",6);
  _ZN12clap_builder7builder3arg3Arg5short17h5cd12524fbf0ad75E(local_578,local_2f8,100);
  _ZN12clap_builder7builder3arg3Arg4long17hc870666ef06e1aa2E(local_2f8,local_578,"domain",6);
  local_888 = "domain";
  local_880 = 6;
  local_878 = "ip-address";
  local_870 = 10;
  local_868 = &DAT_0011827c;
  local_860 = 4;
  local_858 = "short";
  local_850 = 5;
                    /* try { // try from 001584ff to 00158532 has its CatchHandler @ 001588bd */
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h7fed314d5946addbE
            (local_578,local_2f8,&local_888);
  _ZN12clap_builder7builder3arg3Arg4help17hb2dd650e16f5a768E
            (local_2f8,local_578,"Display the name of the DNS domain if possible",0x2e);
  _ZN12clap_builder7builder3arg3Arg6action17hd67184c060da1a9dE(local_578,local_2f8);
  _ZN12clap_builder7builder7command7Command3arg17h34a316cb67597042E(local_2f8,local_840,local_578);
  _ZN12clap_builder7builder3arg3Arg3new17had866788d0e1e168E(local_840,"ip-address",10);
  _ZN12clap_builder7builder3arg3Arg5short17h5cd12524fbf0ad75E(local_578,local_840,0x69);
  _ZN12clap_builder7builder3arg3Arg4long17hc870666ef06e1aa2E(local_840,local_578,"ip-address",10);
  local_888 = "domain";
  local_880 = 6;
  local_878 = "ip-address";
  local_870 = 10;
  local_868 = &DAT_0011827c;
  local_860 = 4;
  local_858 = "short";
  local_850 = 5;
                    /* try { // try from 001585dc to 0015860c has its CatchHandler @ 001588ab */
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h7fed314d5946addbE
            (local_578,local_840,&local_888);
  _ZN12clap_builder7builder3arg3Arg4help17hb2dd650e16f5a768E
            (local_840,local_578,"Display the network address(es) of the host",0x2b);
  _ZN12clap_builder7builder3arg3Arg6action17hd67184c060da1a9dE(local_578,local_840);
  _ZN12clap_builder7builder7command7Command3arg17h34a316cb67597042E(local_840,local_2f8,local_578);
  _ZN12clap_builder7builder3arg3Arg3new17had866788d0e1e168E(local_2f8,&DAT_0011827c,4);
  _ZN12clap_builder7builder3arg3Arg5short17h5cd12524fbf0ad75E(local_578,local_2f8,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17hc870666ef06e1aa2E(local_2f8,local_578,&DAT_0011827c,4);
  local_888 = "domain";
  local_880 = 6;
  local_878 = "ip-address";
  local_870 = 10;
  local_868 = &DAT_0011827c;
  local_860 = 4;
  local_858 = "short";
  local_850 = 5;
                    /* try { // try from 001586b9 to 001586ec has its CatchHandler @ 0015889c */
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h7fed314d5946addbE
            (local_578,local_2f8,&local_888);
  _ZN12clap_builder7builder3arg3Arg4help17hb2dd650e16f5a768E
            (local_2f8,local_578,"Display the FQDN (Fully Qualified Domain Name) (default)",0x38);
  _ZN12clap_builder7builder3arg3Arg6action17hd67184c060da1a9dE(local_578,local_2f8);
  _ZN12clap_builder7builder7command7Command3arg17h34a316cb67597042E(local_2f8,local_840,local_578);
  _ZN12clap_builder7builder3arg3Arg3new17had866788d0e1e168E(local_840,"short",5);
  _ZN12clap_builder7builder3arg3Arg5short17h5cd12524fbf0ad75E(local_578,local_840,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17hc870666ef06e1aa2E(local_840,local_578,"short",5);
  local_888 = "domain";
  local_880 = 6;
  local_878 = "ip-address";
  local_870 = 10;
  local_868 = &DAT_0011827c;
  local_860 = 4;
  local_858 = "short";
  local_850 = 5;
                    /* try { // try from 00158796 to 001587c6 has its CatchHandler @ 0015888a */
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h7fed314d5946addbE
            (local_578,local_840,&local_888);
  _ZN12clap_builder7builder3arg3Arg4help17hb2dd650e16f5a768E
            (local_840,local_578,
             "Display the short hostname (the portion before the first dot) if possible",0x49);
  _ZN12clap_builder7builder3arg3Arg6action17hd67184c060da1a9dE(local_578,local_840);
  _ZN12clap_builder7builder7command7Command3arg17h34a316cb67597042E(local_840,local_2f8,local_578);
  _ZN12clap_builder7builder3arg3Arg3new17had866788d0e1e168E(local_2f8,&DAT_001182a0,4);
  local_888 = (char *)0x2;
                    /* try { // try from 00158815 to 0015883c has its CatchHandler @ 0015887b */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h492cc0e9ed69fc00E
            (local_578,local_2f8,&local_888);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h1b62cfc3855c9ad3E(local_2f8,local_578);
  uVar1 = local_848;
  _ZN12clap_builder7builder7command7Command3arg17h34a316cb67597042E(local_848,local_840,local_2f8);
  return uVar1;
}