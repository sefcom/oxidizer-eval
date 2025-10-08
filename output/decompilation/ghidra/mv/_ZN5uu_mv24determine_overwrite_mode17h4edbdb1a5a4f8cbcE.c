char _ZN5uu_mv24determine_overwrite_mode17h4edbdb1a5a4f8cbcE(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0024a728
          )(param_1,&DAT_00121a12,10);
  if (cVar1 != '\0') {
    return '\0';
  }
  cVar1 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0024a728
          )(param_1,&DAT_00121a07,0xb);
  return '\x02' - cVar1;
}