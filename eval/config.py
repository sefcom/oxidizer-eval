import os

IDA_PATH = os.path.abspath("./idapro-9.0/idat64")
GHIDRA_PATH = os.path.abspath("../ghidra_11.2.1_PUBLIC/support/analyzeHeadless")
IDA_SCRIPTS_PATH = os.path.abspath("scripts/ida")
CACHE_DIR = os.path.abspath("output")
CACHED_DECOMPILED_CODE_PATH = os.path.abspath("output/decompiled_code")
CACHED_CALL_COUNTS_PATH = os.path.abspath("output/call_counts")
CACHED_OTHER_PATH = os.path.abspath("output/other")
CACHED_INFERRED_PROTOTYPES_PATH = os.path.abspath("output/inferred_prototypes")

TYPE_EVAL_RESULT_TEMPLATE = r"""
\begin{table}[ht]
    \caption{Oxidizer's function prototype inference evaluation result.}
    \label{tab:type_eval_result}
    \centering
    \resizebox{\columnwidth}{!}{
        \begin{tabular}{lcccc}
            \toprule
            & \textbf{Correct} & \textbf{Wrong size} & \textbf{Incorrect} & \textbf{Total} \\
            \midrule
            Struct return types  & 1934 (75.9\%) & 231 (9.1\%) & 384 (15.0\%) & 2549 \\
            Result\textless{}T, E\textgreater{} return type & 295 & 173 & 1 & 1367 \\
            Option\textless{}T\textgreater{} return type & 16 & 3 & 1 & 576 \\
            Struct argument types & 14 & 4 & 2 & 7662 \\
            \bottomrule
        \end{tabular}
    }
\end{table}
"""
