__int64 uu_runcon::uumain::uumain()
{
  __int64 v1; // rax
  int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // edx
  int v7; // r8d
  __int64 v8; // r10
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rbx
  _BYTE v13[72]; // [rsp+0h] [rbp-468h] BYREF
  _OWORD src[10]; // [rsp+50h] [rbp-418h] BYREF
  _QWORD dest[19]; // [rsp+F0h] [rbp-378h] BYREF
  _BYTE v16[736]; // [rsp+188h] [rbp-2E0h] BYREF

  uu_runcon::uu_app(v16);
  uu_runcon::parse_command_line(src);
  if ( __OFSUB__(0LL, *(_QWORD *)&src[0]) )
    return *((_QWORD *)&src[0] + 1);
  memcpy(dest, src, sizeof(dest));
  v1 = 2LL;
  if ( (unsigned __int64)(dest[3] + 0x7FFFFFFFFFFFFFFFLL) < 2 )
    v1 = dest[3] + 0x7FFFFFFFFFFFFFFFLL;
  if ( !v1 )
  {
    uu_runcon::print_current_context(v13);
    if ( *(_DWORD *)v13 == 17 )
    {
LABEL_14:
      v4 = 0LL;
LABEL_31:
      v11 = v4;
      goto LABEL_32;
    }
LABEL_30:
    *(_QWORD *)&src[4] = *(_QWORD *)&v13[64];
    src[3] = *(_OWORD *)&v13[48];
    src[2] = *(_OWORD *)&v13[32];
    src[1] = *(_OWORD *)&v13[16];
    src[0] = *(_OWORD *)v13;
    DWORD2(src[4]) = 1;
    v4 = alloc::boxed::Box<T>::new(src);
    goto LABEL_31;
  }
  if ( v1 == 1 )
  {
    uu_runcon::get_plain_context(src, dest[5], dest[6]);
    if ( LODWORD(src[0]) == 17 )
    {
      uu_runcon::uumain::uumain::{{closure}}(v13, *((_QWORD *)&src[0] + 1));
      v2 = *(_DWORD *)v13;
      if ( *(_DWORD *)v13 == 17 )
      {
        v3 = uu_runcon::execute_command(dest[8], dest[9], dest[1], dest[2]);
LABEL_24:
        v11 = v3;
LABEL_32:
        core::ptr::drop_in_place<uu_runcon::Options>(dest);
        return v11;
      }
    }
    else
    {
      *(_QWORD *)&v13[64] = *(_QWORD *)&src[4];
      *(_OWORD *)&v13[48] = src[3];
      *(_OWORD *)&v13[32] = src[2];
      *(_OWORD *)&v13[16] = src[1];
      *(_OWORD *)v13 = src[0];
      v2 = src[0];
    }
    goto LABEL_34;
  }
  if ( dest[15] == 0x8000000000000000LL )
  {
    uu_runcon::print_current_context(v13);
    if ( *(_DWORD *)v13 == 17 )
      goto LABEL_14;
    goto LABEL_30;
  }
  v5 = 0LL;
  v6 = 0;
  if ( dest[3] == 0x8000000000000000LL )
  {
    v7 = 0;
    if ( dest[6] == 0x8000000000000000LL )
      goto LABEL_17;
  }
  else
  {
    v6 = dest[4];
    v7 = 0;
    if ( dest[6] == 0x8000000000000000LL )
    {
LABEL_17:
      v8 = 0LL;
      if ( dest[9] == 0x8000000000000000LL )
        goto LABEL_19;
      goto LABEL_18;
    }
  }
  v7 = dest[7];
  v8 = 0LL;
  if ( dest[9] != 0x8000000000000000LL )
LABEL_18:
    v8 = dest[10];
LABEL_19:
  if ( dest[12] != 0x8000000000000000LL )
    v5 = dest[13];
  v9 = dest[16];
  v10 = dest[17];
  uu_runcon::get_custom_context(
    (unsigned int)src,
    LOBYTE(dest[18]),
    v6,
    dest[5],
    v7,
    dest[8],
    v8,
    dest[11],
    v5,
    dest[14],
    dest[16],
    dest[17]);
  if ( LODWORD(src[0]) == 17 )
  {
    uu_runcon::uumain::uumain::{{closure}}(v13, *((_QWORD *)&src[0] + 1));
    v2 = *(_DWORD *)v13;
    if ( *(_DWORD *)v13 == 17 )
    {
      v3 = uu_runcon::execute_command(v9, v10, dest[1], dest[2]);
      goto LABEL_24;
    }
  }
  else
  {
    *(_QWORD *)&v13[64] = *(_QWORD *)&src[4];
    *(_OWORD *)&v13[48] = src[3];
    *(_OWORD *)&v13[32] = src[2];
    *(_OWORD *)&v13[16] = src[1];
    *(_OWORD *)v13 = src[0];
    v2 = src[0];
  }
LABEL_34:
  *(_QWORD *)((char *)&src[4] + 4) = *(unsigned int *)&v13[68] | 0x100000000LL;
  *(_OWORD *)((char *)&src[3] + 4) = *(_OWORD *)&v13[52];
  *(_OWORD *)((char *)&src[2] + 4) = *(_OWORD *)&v13[36];
  *(_OWORD *)((char *)&src[1] + 4) = *(_OWORD *)&v13[20];
  *(_OWORD *)((char *)src + 4) = *(_OWORD *)&v13[4];
  LODWORD(src[0]) = v2;
  v12 = alloc::boxed::Box<T>::new(src);
  core::ptr::drop_in_place<uu_runcon::Options>(dest);
  return v12;
}