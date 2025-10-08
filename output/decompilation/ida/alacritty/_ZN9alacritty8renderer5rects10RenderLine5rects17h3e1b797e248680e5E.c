__int64 __fastcall alacritty::renderer::rects::RenderLine::rects(__int64 a1, __int64 *a2, int a3, int a4, __int64 a5)
{
  __int64 v6; // r13
  __int64 v7; // r9
  __int64 v8; // r12
  int v9; // eax
  int v10; // r14d
  int v11; // r15d
  int v12; // ebp
  __int64 v13; // r13
  __int64 *v14; // rax
  __int64 result; // rax
  _OWORD *v16; // rcx
  __int64 v17; // [rsp+8h] [rbp-60h]
  __int128 v18; // [rsp+10h] [rbp-58h] BYREF
  __int64 v19; // [rsp+20h] [rbp-48h]
  __int64 *v20; // [rsp+28h] [rbp-40h]
  __int64 v21; // [rsp+30h] [rbp-38h]

  v21 = a1;
  *(_QWORD *)&v18 = 0LL;
  *((_QWORD *)&v18 + 1) = 4LL;
  v19 = 0LL;
  v6 = *a2;
  v7 = a2[1];
  if ( *a2 >= (unsigned __int64)a2[2] )
  {
    v10 = *((unsigned __int16 *)a2 + 16) | (*((unsigned __int8 *)a2 + 34) << 16);
    v14 = a2;
  }
  else
  {
    v17 = a2[2];
    v8 = *(_QWORD *)(a5 + 8) - 1LL;
    v9 = *((unsigned __int16 *)a2 + 16);
    v20 = a2;
    v10 = v9 | (*((unsigned __int8 *)a2 + 34) << 16);
    v11 = a4;
    v12 = a5;
    alacritty::renderer::rects::RenderLine::push_rects((unsigned int)&v18, a4, a5, a3, v6, v7, v8, v10);
    v13 = v6 + 1;
    if ( v13 == v17 )
    {
      LODWORD(v7) = 0;
      LODWORD(v6) = v17;
      v14 = v20;
      a4 = v11;
      LODWORD(a5) = v12;
    }
    else
    {
      a4 = v11;
      LODWORD(a5) = v12;
      do
      {
        alacritty::renderer::rects::RenderLine::push_rects((unsigned int)&v18, a4, a5, a3, v13++, 0, v8, v10);
        a4 = v11;
        LODWORD(a5) = v12;
      }
      while ( v17 != v13 );
      LODWORD(v6) = v17;
      v14 = v20;
      LODWORD(v7) = 0;
    }
  }
  alacritty::renderer::rects::RenderLine::push_rects((unsigned int)&v18, a4, a5, a3, v6, v7, v14[3], v10);
  result = v19;
  v16 = (_OWORD *)v21;
  *(_QWORD *)(v21 + 16) = v19;
  *v16 = v18;
  return result;
}