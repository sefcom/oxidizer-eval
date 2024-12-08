void __fastcall uu_cp::handle_preserve(__int64 a1, char a2, char a3, __int64 a4)
{
  __int64 v5; // rax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  _BYTE v8[64]; // [rsp+0h] [rbp-98h] BYREF
  _OWORD v9[5]; // [rsp+40h] [rbp-58h] BYREF

  if ( a2 )
  {
    uu_cp::copy_attributes::{{closure}}(v8, a4);
    v5 = *(_QWORD *)v8;
    if ( a3 )
    {
      if ( *(_QWORD *)v8 != 13LL )
      {
        *(_QWORD *)(a1 + 56) = *(_QWORD *)&v8[56];
        v6 = *(_OWORD *)&v8[8];
        v7 = *(_OWORD *)&v8[24];
        *(_OWORD *)(a1 + 40) = *(_OWORD *)&v8[40];
        *(_OWORD *)(a1 + 24) = v7;
        *(_OWORD *)(a1 + 8) = v6;
        *(_QWORD *)a1 = v5;
        return;
      }
    }
    else if ( *(_QWORD *)v8 != 13LL )
    {
      v9[3] = *(_OWORD *)&v8[48];
      v9[2] = *(_OWORD *)&v8[32];
      v9[1] = *(_OWORD *)&v8[16];
      v9[0] = *(_OWORD *)v8;
      uu_cp::show_error_if_needed(v9);
      core::ptr::drop_in_place<uu_cp::Error>(v9);
    }
  }
  *(_QWORD *)a1 = 13LL;
}
