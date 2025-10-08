__int64 __fastcall just::function::get(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  void *v4; // rax
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v10; // [rsp+8h] [rbp-80h] BYREF
  __int64 v11; // [rsp+10h] [rbp-78h]
  __int64 *v12; // [rsp+18h] [rbp-70h] BYREF
  __int64 (__fastcall *v13)(); // [rsp+20h] [rbp-68h]
  char v14[8]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v15; // [rsp+30h] [rbp-58h]
  __int64 v16; // [rsp+38h] [rbp-50h]
  _QWORD v17[9]; // [rsp+40h] [rbp-48h] BYREF

  v2 = <&str as core::str::pattern::Pattern>::strip_suffix_of(aDir, 4LL, a1, a2);
  if ( v2 )
  {
    v10 = v2;
    v11 = v3;
    v12 = &v10;
    v13 = <&T as core::fmt::Display>::fmt;
    v4 = &unk_42FD20;
LABEL_5:
    v17[0] = v4;
    v17[1] = 2LL;
    v17[4] = 0LL;
    v17[2] = &v12;
    v17[3] = 1LL;
    core::option::Option<T>::map_or_else(v14, 0LL, v3, v17);
    goto LABEL_6;
  }
  v5 = <&str as core::str::pattern::Pattern>::strip_suffix_of(aDirNative, 11LL, a1, a2);
  if ( v5 )
  {
    v10 = v5;
    v11 = v3;
    v12 = &v10;
    v13 = <&T as core::fmt::Display>::fmt;
    v4 = &unk_42FD40;
    goto LABEL_5;
  }
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v14, a1);
LABEL_6:
  v6 = v15;
  v7 = v16;
  v8 = 1LL;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v15, v16, aAbsolutePath, 13LL) )
  {
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aAppend, 6LL) )
    {
      v8 = 4LL;
    }
    else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aArch, 4LL) )
    {
      v8 = 0LL;
    }
    else if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aBlake3, 6LL)
           && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aBlake3File, 11LL) )
    {
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aCacheDirectory, 15LL) )
      {
        v8 = 0LL;
      }
      else if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aCanonicalize, 12LL)
             && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aCapitalize, 10LL) )
      {
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aChoose_0, 6LL) )
        {
          v8 = 4LL;
        }
        else if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aClean, 5LL) )
        {
          if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aConfigDirector, 16LL) )
          {
            v8 = 0LL;
          }
          else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aConfigLocalDir, 22LL) )
          {
            v8 = 0LL;
          }
          else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aDataDirectory, 14LL) )
          {
            v8 = 0LL;
          }
          else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aDataLocalDirec, 20LL) )
          {
            v8 = 0LL;
          }
          else if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aDatetime, 8LL)
                 && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aDatetimeUtc, 12LL)
                 && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aEncodeUriCompo, 20LL) )
          {
            if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aEnv_0, 3LL) )
            {
              v8 = 2LL;
            }
            else if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aEnvVar, 7LL) )
            {
              if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aEnvVarOrDefaul, 18LL) )
              {
                v8 = 4LL;
              }
              else if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aError_0, 5LL) )
              {
                if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aExecutableDire, 20LL) )
                {
                  v8 = 0LL;
                }
                else if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aExtension, 9LL)
                       && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aFileName, 9LL)
                       && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aFileStem, 9LL) )
                {
                  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                          v6,
                                          v7,
                                          aHomeDirectory,
                                          14LL) )
                  {
                    v8 = 0LL;
                  }
                  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                               v6,
                                               v7,
                                               aInvocationDire,
                                               20LL) )
                  {
                    v8 = 0LL;
                  }
                  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                               v6,
                                               v7,
                                               aInvocationDire_0,
                                               27LL) )
                  {
                    v8 = 0LL;
                  }
                  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                               v6,
                                               v7,
                                               aIsDependency,
                                               13LL) )
                  {
                    v8 = 0LL;
                  }
                  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aJoin, 4LL) )
                  {
                    v8 = 5LL;
                  }
                  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                               v6,
                                               v7,
                                               aJustExecutable,
                                               15LL) )
                  {
                    v8 = 0LL;
                  }
                  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                               v6,
                                               v7,
                                               "just_pidnamepathstride: xidstart( ",
                                               8LL) )
                  {
                    v8 = 0LL;
                  }
                  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                               v6,
                                               v7,
                                               aJustfile_0,
                                               8LL) )
                  {
                    v8 = 0LL;
                  }
                  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                               v6,
                                               v7,
                                               aJustfileDirect,
                                               18LL) )
                  {
                    v8 = 0LL;
                  }
                  else if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                v6,
                                                v7,
                                                aKebabcase,
                                                9LL)
                         && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                v6,
                                                v7,
                                                aLowercamelcase,
                                                14LL)
                         && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                v6,
                                                v7,
                                                aLowercase,
                                                9LL) )
                  {
                    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, &unk_65B90, 16LL) )
                    {
                      v8 = 0LL;
                    }
                    else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                 v6,
                                                 v7,
                                                 aModuleFile,
                                                 11LL) )
                    {
                      v8 = 0LL;
                    }
                    else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                 v6,
                                                 v7,
                                                 aNumCpus,
                                                 8LL) )
                    {
                      v8 = 0LL;
                    }
                    else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aOs, 2LL) )
                    {
                      v8 = 0LL;
                    }
                    else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                 v6,
                                                 v7,
                                                 aOsFamily,
                                                 9LL) )
                    {
                      v8 = 0LL;
                    }
                    else if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                  v6,
                                                  v7,
                                                  aParentDirector,
                                                  16LL)
                           && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                  v6,
                                                  v7,
                                                  aPathExists,
                                                  11LL) )
                    {
                      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aPrepend, 7LL) )
                      {
                        v8 = 4LL;
                      }
                      else if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                    v6,
                                                    v7,
                                                    aQuote,
                                                    5LL)
                             && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                    v6,
                                                    v7,
                                                    &unk_67198,
                                                    4LL) )
                      {
                        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aReplace, 7LL) )
                        {
                          v8 = 6LL;
                        }
                        else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                     v6,
                                                     v7,
                                                     aReplaceRegex,
                                                     13LL) )
                        {
                          v8 = 6LL;
                        }
                        else if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                      v6,
                                                      v7,
                                                      aRequire,
                                                      7LL) )
                        {
                          if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                  v6,
                                                  v7,
                                                  aSemverMatches,
                                                  14LL) )
                          {
                            v8 = 4LL;
                          }
                          else if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                        v6,
                                                        v7,
                                                        aSha256,
                                                        6LL)
                                 && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                        v6,
                                                        v7,
                                                        aSha256File,
                                                        11LL) )
                          {
                            if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                    v6,
                                                    v7,
                                                    aShell_0,
                                                    5LL) )
                            {
                              v8 = 3LL;
                            }
                            else if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                          v6,
                                                          v7,
                                                          aShoutykebabcas,
                                                          15LL)
                                   && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                          v6,
                                                          v7,
                                                          aShoutysnakecas,
                                                          15LL)
                                   && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                          v6,
                                                          v7,
                                                          aSnakecase,
                                                          9LL) )
                            {
                              if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                      v6,
                                                      v7,
                                                      aSourceDirector,
                                                      16LL) )
                              {
                                v8 = 0LL;
                              }
                              else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                           v6,
                                                           v7,
                                                           aSourceFile,
                                                           11LL) )
                              {
                                v8 = 0LL;
                              }
                              else if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                            v6,
                                                            v7,
                                                            aStyle,
                                                            5LL)
                                     && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                            v6,
                                                            v7,
                                                            aTitlecase,
                                                            9LL)
                                     && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                            v6,
                                                            v7,
                                                            aTrim,
                                                            4LL)
                                     && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                            v6,
                                                            v7,
                                                            "trim_endseparateS",
                                                            8LL) )
                              {
                                if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                        v6,
                                                        v7,
                                                        aTrimEndMatch,
                                                        14LL) )
                                {
                                  v8 = 4LL;
                                }
                                else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                             v6,
                                                             v7,
                                                             aTrimEndMatches,
                                                             16LL) )
                                {
                                  v8 = 4LL;
                                }
                                else if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                              v6,
                                                              v7,
                                                              aTrimStart,
                                                              10LL) )
                                {
                                  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                          v6,
                                                          v7,
                                                          aTrimStartMatch,
                                                          16LL) )
                                  {
                                    v8 = 4LL;
                                  }
                                  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                               v6,
                                                               v7,
                                                               aTrimStartMatch_0,
                                                               18LL) )
                                  {
                                    v8 = 4LL;
                                  }
                                  else if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                                v6,
                                                                v7,
                                                                aUppercamelcase,
                                                                14LL)
                                         && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                                v6,
                                                                v7,
                                                                aUppercase,
                                                                9LL) )
                                  {
                                    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                            v6,
                                                            v7,
                                                            aUuid,
                                                            4LL) )
                                    {
                                      v8 = 0LL;
                                    }
                                    else if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                                  v6,
                                                                  v7,
                                                                  aWhich,
                                                                  5LL) )
                                    {
                                      v8 = 7LL;
                                      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                              v6,
                                                              v7,
                                                              aWithoutExtensi,
                                                              17LL) )
                                        v8 = 1LL;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  core::ptr::drop_in_place<alloc::string::String>(v14);
  return v8;
}