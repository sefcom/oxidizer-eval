undefined __rustcall uu_echo::Base::ascii_to_number(char param_1,char param_2)

{
  undefined uVar1;
  
  if (param_1 != '\0') {
    uVar1 = ascii_to_number::hexadecimal_ascii_digit_to_number(param_2);
    return uVar1;
  }
  return (byte)(param_2 - 0x30U) < 8;
}