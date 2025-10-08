char _ZN21ruff_python_formatter5other10parameters43assign_argument_separator_comment_placement17h5db81c074307048eE
               (uint *param_1,uint *param_2,uint param_3,char param_4)

{
  char cVar1;
  
  if (param_1 != (uint *)0x0) {
    if (((param_1[2] < param_3) && (param_4 != '\0')) && (param_3 < *param_1)) {
      return '\0';
    }
    if (((param_1[1] < param_3) && (param_4 == '\0')) && (param_3 < param_1[3])) {
      return '\x01';
    }
  }
  cVar1 = '\x04';
  if ((param_2 != (uint *)0x0) &&
     ((((param_3 <= param_2[2] || (param_4 == '\0')) || (cVar1 = '\x02', *param_2 <= param_3)) &&
      (cVar1 = '\x04', param_2[1] < param_3)))) {
    cVar1 = '\x04';
    if (param_3 < param_2[3]) {
      cVar1 = param_4 + '\x03';
    }
    return cVar1;
  }
  return cVar1;
}