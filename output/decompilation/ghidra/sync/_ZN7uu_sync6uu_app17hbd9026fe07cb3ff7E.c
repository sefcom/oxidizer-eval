undefined8 _ZN7uu_sync6uu_app17hbd9026fe07cb3ff7E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_800 [700];
  ulong local_544;
  undefined4 local_53c;
  undefined local_538 [592];
  undefined local_2e8 [700];
  ulong local_2c;
  undefined4 local_24;
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h226173cf9d4ce7e8E(local_800,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hffedbca79457cd14E(local_2e8,local_800);
  _ZN12clap_builder7builder7command7Command5about17he90c750c85b3f794E(local_800,local_2e8);
                    /* try { // try from 001aad87 to 001aada0 has its CatchHandler @ 001aafd9 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_538,"{} [OPTION]... FILE...",0x16);
  _ZN12clap_builder7builder7command7Command14override_usage17hcd8e6c38bcf1184cE
            (local_2e8,local_800,local_538);
  (*(code *)PTR_memcpy_002128c0)(local_800,local_2e8,700);
  local_544 = local_2c | 0x8000000080;
  local_53c = local_24;
  _ZN12clap_builder7builder3arg3Arg3new17hd46fc878d46291c1E(local_2e8,"file-system",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17h816c192d055b63c9E(local_538,local_2e8,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17hceb55469d3fe56eeE(local_2e8,local_538,"file-system",0xb);
                    /* try { // try from 001aae4b to 001aae87 has its CatchHandler @ 001aaffa */
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h65b70541f207a135E
            (local_538,local_2e8,&DAT_00113404,4);
  _ZN12clap_builder7builder3arg3Arg4help17h493d35bbedfd13eaE
            (local_2e8,local_538,
             "sync the file systems that contain the files (Linux and Windows only)",0x45);
  _ZN12clap_builder7builder3arg3Arg6action17h4fcfa1a150e8c61aE(local_538,local_2e8,2);
  _ZN12clap_builder7builder7command7Command3arg17hd049008808d1342bE(local_2e8,local_800,local_538);
  _ZN12clap_builder7builder3arg3Arg3new17hd46fc878d46291c1E(local_800,&DAT_00113404,4);
  _ZN12clap_builder7builder3arg3Arg5short17h816c192d055b63c9E(local_538,local_800,100);
  _ZN12clap_builder7builder3arg3Arg4long17hceb55469d3fe56eeE(local_800,local_538,&DAT_00113404,4);
                    /* try { // try from 001aaf06 to 001aaf3f has its CatchHandler @ 001aafe8 */
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h65b70541f207a135E
            (local_538,local_800,"file-system",0xb);
  _ZN12clap_builder7builder3arg3Arg4help17h493d35bbedfd13eaE
            (local_800,local_538,"sync only file data, no unneeded metadata (Linux only)",0x36);
  _ZN12clap_builder7builder3arg3Arg6action17h4fcfa1a150e8c61aE(local_538,local_800,2);
  _ZN12clap_builder7builder7command7Command3arg17hd049008808d1342bE(local_800,local_2e8,local_538);
  _ZN12clap_builder7builder3arg3Arg3new17hd46fc878d46291c1E(local_2e8,"files",5);
  _ZN12clap_builder7builder3arg3Arg6action17h4fcfa1a150e8c61aE(local_538,local_2e8,1);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h5e4863be2b9d894eE(local_2e8,local_538);
  _ZN12clap_builder7builder7command7Command3arg17hd049008808d1342bE(param_1,local_800,local_2e8);
  return param_1;
}