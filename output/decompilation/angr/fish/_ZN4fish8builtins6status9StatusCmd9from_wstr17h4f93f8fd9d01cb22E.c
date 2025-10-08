long long fish::builtins::status::StatusCmd::from_wstr(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v1;  // rbp

    v1 = vvar_17{reg 56} & 0xffffffffffffff00 | 2;
    if (!(char)a0.equal(a1, "basenameq", 8) && !(char)a0.equal(a1, &g_5483c0, 16))
    {
        v1 = v1 & 0xffffffffffffff00 | 22;
        if (!(char)a0.equal(a1, "build-infobuildinfocurrent-commandcurrent-commandlinecurrent-dirnamecurrent-line-numberfish-pathlist-filesis-breakpointis-command-substitutionis-full-job-controlis-interactiveis-interactive-job-controlis-interactive-readis-no-job-controljob-controlline-num", 10))
        {
            v1 = v1 & 0xffffffffffffff00 | 23;
            if (!(char)a0.equal(a1, "buildinfocurrent-commandcurrent-commandlinecurrent-dirnamecurrent-line-numberfish-pathlist-filesis-breakpointis-command-substitutionis-full-job-controlis-interactiveis-interactive-job-controlis-interactive-readis-no-job-controljob-controlline-numberprint-s", 9))
            {
                v1 = v1 & 0xffffffffffffff00 | 1;
                if (!(char)a0.equal(a1, "current-commandcurrent-commandlinecurrent-dirnamecurrent-line-numberfish-pathlist-filesis-breakpointis-command-substitutionis-full-job-controlis-interactiveis-interactive-job-controlis-interactive-readis-no-job-controljob-controlline-numberprint-stack-trac", 15))
                {
                    v1 = v1 & 0xffffffffffffff00 | 21;
                    if (!(char)a0.equal(a1, "current-commandlinecurrent-dirnamecurrent-line-numberfish-pathlist-filesis-breakpointis-command-substitutionis-full-job-controlis-interactiveis-interactive-job-controlis-interactive-readis-no-job-controljob-controlline-numberprint-stack-tracestack-tracetes", 19))
                    {
                        v1 = v1 & 0xffffffffffffff00 | 3;
                        if (!(char)a0.equal(a1, "current-dirnamecurrent-line-numberfish-pathlist-filesis-breakpointis-command-substitutionis-full-job-controlis-interactiveis-interactive-job-controlis-interactive-readis-no-job-controljob-controlline-numberprint-stack-tracestack-tracetest-featuretest-terminal-feature", 15))
                        {
                            if ((char)a0.equal(a1, &g_549390, 16))
                            {
                                v1 = v1 & 0xffffffffffffff00 | 5;
                            }
                            else if ((char)a0.equal(a1, "current-functionstring-collect.1", 16))
                            {
                                v1 = v1 & 0xffffffffffffff00 | 7;
                            }
                            else if ((char)a0.equal(a1, "current-line-numberfish-pathlist-filesis-breakpointis-command-substitutionis-full-job-controlis-interactiveis-interactive-job-controlis-interactive-readis-no-job-controljob-controlline-numberprint-stack-tracestack-tracetest-featuretest-terminal-feature", 19))
                            {
                                v1 = v1 & 0xffffffffffffff00 | 17;
                            }
                            else if (!(char)a0.equal(a1, "dirname", 7))
                            {
                                v1 = v1 & 0xffffffffffffff00 | 4;
                                if (!(char)a0.equal(a1, "featuresDebug onVisa tidKomenda\ni", 8))
                                {
                                    v1 = v1 & 0xffffffffffffff00 | 5;
                                    if (!(char)a0.equal(a1, "filenamestatus.1Dim text", 8))
                                    {
                                        v1 = v1 & 0xffffffffffffff00 | 6;
                                        if (!(char)a0.equal(a1, "fish-pathlist-filesis-breakpointis-command-substitutionis-full-job-controlis-interactiveis-interactive-job-controlis-interactive-readis-no-job-controljob-controlline-numberprint-stack-tracestack-tracetest-featuretest-terminal-feature", 9))
                                        {
                                            v1 = v1 & 0xffffffffffffff00 | 7;
                                            if (!(char)a0.equal(a1, "function\\", 8))
                                            {
                                                v1 = v1 & 0xffffffffffffff00 | 24;
                                                if (!(char)a0.equal(a1, "get-fileBackwardProcess\nLog fileNieznany", 8))
                                                {
                                                    v1 = v1 & 0xffffffffffffff00 | 25;
                                                    if (!(char)a0.equal(a1, "list-filesis-breakpointis-command-substitutionis-full-job-controlis-interactiveis-interactive-job-controlis-interactive-readis-no-job-controljob-controlline-numberprint-stack-tracestack-tracetest-featuretest-terminal-feature", 10))
                                                    {
                                                        v1 = v1 & 0xffffffffffffff00 | 8;
                                                        if (!(char)a0.equal(a1, "is-blockKeyEventFocusOutImplicitTERMINFOSet timeLANGUAGEf", 8))
                                                        {
                                                            v1 = v1 & 0xffffffffffffff00 | 9;
                                                            if (!(char)a0.equal(a1, "is-breakpointis-command-substitutionis-full-job-controlis-interactiveis-interactive-job-controlis-interactive-readis-no-job-controljob-controlline-numberprint-stack-tracestack-tracetest-featuretest-terminal-feature", 13))
                                                            {
                                                                v1 = v1 & 0xffffffffffffff00 | 10;
                                                                if (!(char)a0.equal(a1, "is-command-substitutionis-full-job-controlis-interactiveis-interactive-job-controlis-interactive-readis-no-job-controljob-controlline-numberprint-stack-tracestack-tracetest-featuretest-terminal-feature", 23))
                                                                {
                                                                    v1 = v1 & 0xffffffffffffff00 | 11;
                                                                    if (!(char)a0.equal(a1, "is-full-job-controlis-interactiveis-interactive-job-controlis-interactive-readis-no-job-controljob-controlline-numberprint-stack-tracestack-tracetest-featuretest-terminal-feature", 19))
                                                                    {
                                                                        v1 = v1 & 0xffffffffffffff00 | 12;
                                                                        if (!(char)a0.equal(a1, "is-interactiveis-interactive-job-controlis-interactive-readis-no-job-controljob-controlline-numberprint-stack-tracestack-tracetest-featuretest-terminal-feature", 14))
                                                                        {
                                                                            v1 = v1 & 0xffffffffffffff00 | 13;
                                                                            if (!(char)a0.equal(a1, "is-interactive-job-controlis-interactive-readis-no-job-controljob-controlline-numberprint-stack-tracestack-tracetest-featuretest-terminal-feature", 26))
                                                                            {
                                                                                v1 = v1 & 0xffffffffffffff00 | 14;
                                                                                if (!(char)a0.equal(a1, "is-interactive-readis-no-job-controljob-controlline-numberprint-stack-tracestack-tracetest-featuretest-terminal-feature", 19))
                                                                                {
                                                                                    v1 = v1 & 0xffffffffffffff00 | 15;
                                                                                    if (!(char)a0.equal(a1, "is-loginparm_ichStackfelToujoursFUNCTION", 8))
                                                                                    {
                                                                                        v1 = v1 & 0xffffffffffffff00 | 16;
                                                                                        if (!(char)a0.equal(a1, "is-no-job-controljob-controlline-numberprint-stack-tracestack-tracetest-featuretest-terminal-feature", 17))
                                                                                        {
                                                                                            v1 = v1 & 0xffffffffffffff00 | 18;
                                                                                            if (!(char)a0.equal(a1, "job-controlline-numberprint-stack-tracestack-tracetest-featuretest-terminal-feature", 11))
                                                                                            {
                                                                                                v1 = v1 & 0xffffffffffffff00 | 17;
                                                                                                if (!(char)a0.equal(a1, "line-numberprint-stack-tracestack-tracetest-featuretest-terminal-feature", 11))
                                                                                                {
                                                                                                    v1 = v1 & 0xffffffffffffff00 | 19;
                                                                                                    if (!(char)a0.equal(a1, "print-stack-tracestack-tracetest-featuretest-terminal-feature", 17) && !(char)a0.equal(a1, "stack-tracetest-featuretest-terminal-feature", 11))
                                                                                                    {
                                                                                                        v1 = v1 & 0xffffffffffffff00 | 26;
                                                                                                        if (!(char)a0.equal(a1, "terminalkey_stabBorg cowDeadlockcontinuet", 8))
                                                                                                        {
                                                                                                            v1 = v1 & 0xffffffffffffff00 | 20;
                                                                                                            if (!(char)a0.equal(a1, "test-featuretest-terminal-feature", 12))
                                                                                                                v1 = (!(char)a0.equal(a1, "test-terminal-feature", 21) ? 0 : 27);
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
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return v1 & 4294967295;
}
