void _ZN2fd10exit_codes8ExitCode4exit17h02d8f1fb9c43201aE(byte param_1)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  int local_18 [4];
  
  bVar2 = param_1 - 2;
  if (3 < bVar2) {
    bVar2 = 1;
  }
  switch(param_1) {
  case 2:
    goto switchD_002f3f86_caseD_2;
  default:
    (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_0053fe78)(~param_1 & 1);
  case 4:
    (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_0053fe78)(1);
switchD_002f3f86_caseD_5:
    (*(code *)PTR__ZN3nix3sys6signal6signal17h5c99f1cb58fa7598E_005408f8)(local_18,2,0);
    bVar2 = 0x82;
    bVar3 = 0x82;
    if (local_18[0] == 4) {
switchD_002f3f86_caseD_2:
      (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_0053fe78)(bVar2);
      bVar3 = bVar2;
    }
    (*(code *)PTR__ZN3nix3sys6signal5raise17hc734896dc776f4d0E_00540900)(2);
    (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_0053fe78)(bVar3);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 5:
    goto switchD_002f3f86_caseD_5;
  }
}