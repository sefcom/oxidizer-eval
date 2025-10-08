char _ZN5uu_ls13extract_files17h9e160bb0932eec0fE(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048fda0
          )(param_1,"all",3);
  if (cVar1 != '\0') {
    return '\0';
  }
  cVar1 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048fda0
          )(param_1,"almost-all",10);
  return '\x02' - cVar1;
}