# Word2Vec 
<!-- TODO: better name -->

This repository contains the [Tomas Mikolov's](https://scholar.google.com/citations?user=oBu8kMMAAAAJ&hl=en) source code for the `word2vec` tool for computing continuous distributed representations of words.

Initially, the repository was hosted 
at svn google's server, the first commit of this repo is a mirror of
that repo [Google 2013](https://code.google.com/archive/p/word2vec/).


## Prerequisites

Before building the repository, ensure you have the following prerequisites installed on your system:

- C compiler (e.g., gcc)
- Make build system
- Python (if you plan to use the provided Python scripts)

## Building the word2vec model (Windows 10 + MinGW64)

To build the repository, follow these steps:

1. Clone the repository to your local machine:
```sh
   $ git clone https://github.com/AlexisTercero55/word2vec_TMB/tree/main
```
2. Navigate to the repository directory and run make tool
```sh
   $ cd  .\word2vec_TMB
   $ make
```





# 1st Readme
Tools for computing distributed representtion of words
------------------------------------------------------

We provide an implementation of the Continuous Bag-of-Words (CBOW) and the Skip-gram model (SG), as well as several demo scripts.

Given a text corpus, the word2vec tool learns a vector for every word in the vocabulary using the Continuous
Bag-of-Words or the Skip-Gram neural network architectures. The user should to specify the following:
 - desired vector dimensionality
 - the size of the context window for either the Skip-Gram or the Continuous Bag-of-Words model
 - training algorithm: hierarchical softmax and / or negative sampling
 - threshold for downsampling the frequent words 
 - number of threads to use
 - the format of the output word vector file (text or binary)

Usually, the other hyper-parameters such as the learning rate do not need to be tuned for different training sets. 

The script demo-word.sh downloads a small (100MB) text corpus from the web, and trains a small word vector model. After the training
is finished, the user can interactively explore the similarity of the words.

More information about the scripts is provided at https://code.google.com/p/word2vec/

