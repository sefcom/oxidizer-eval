void *__fastcall uu_env::native_int_str::get_char_from_native_int(char a1)
{
  void *result; // rax
  int v2; // ecx
  int v3; // edi
  int v4; // esi
  char v5; // [rsp+7h] [rbp-21h] BYREF
  __int64 v6; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int8 *v7; // [rsp+10h] [rbp-18h]
  __int64 v8; // [rsp+18h] [rbp-10h]

  v5 = a1;
  core::str::converts::from_utf8(&v6, &v5, 1LL);
  if ( v6 )
    return &unk_110000;
  if ( !v8 )
    core::option::unwrap_failed(&anon_6a2a029ee6b08fd20bf9f6115e8d9be2_4_llvm_14650951337123673598);
  result = (void *)*v7;
  if ( (char)result < 0 )
  {
    v2 = (unsigned __int8)result & 0x1F;
    v3 = v7[1] & 0x3F;
    if ( (unsigned __int8)result <= 0xDFu )
    {
      return (void *)(v3 | (unsigned int)(v2 << 6));
    }
    else
    {
      v4 = (v3 << 6) | v7[2] & 0x3F;
      if ( (unsigned __int8)result < 0xF0u )
        return (void *)((v2 << 12) | (unsigned int)v4);
      else
        return (void *)((((unsigned __int8)result & 7) << 18) | (v4 << 6) | v7[3] & 0x3Fu);
    }
  }
  return result;
}
