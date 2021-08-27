///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Template: Vector
//  Brief: Header file
///////////////////////////////////////////////////////////

#pragma once

template <class T, int N>
class Vector
{

public:
    Vector();

    ~Vector();

    T& operator[](const int& p_Id);

    const T& operator[](const int& p_Id) const;

    /**
     * Renvoie la taille du max vecteur
     */ 
    static int size();

    /**
     * Renvoie le nombre d'objet dans le vecteur
     */ 
    int count() const;

    void delette(const int& p_Id);

    T& selectOne();

    bool isEmpty() const;

    bool isFull() const;

    void clear_all();

    const char* get_types();
private:
    T m_Vector[N];
    int m_Count;
    T m_Base;
};

/////////////////////////////////
//////// DEFINITIONS ////////////
/////////////////////////////////

template<class T, int N>
Vector<T, N>::Vector() : m_Count(0)
{
}

template<class T, int N>
Vector<T, N>::~Vector()
{
}

template<class T, int N>
inline T& Vector<T, N>::operator[](const int& p_Id)
{
    // Assert si p_Id > N
    // Assert si p_Id > count
    return m_Vector[p_Id];
}

template<class T, int N>
inline const T& Vector<T, N>::operator[](const int& p_Id) const
{
    // Assert si p_Id > N
    // Assert si p_Id > count
    return m_Vector[p_Id];
}

template<class T, int N>
int Vector<T, N>::size()
{
    return N;
}

template<class T, int N>
int Vector<T, N>::count() const
{
    return m_Count;
}

template<class T, int N>
void Vector<T, N>::delette(const int& p_Id)
{
    //TODO: Assert si p_Id > count()

    if(p_Id == 0)
    {
        m_Vector[0] = m_Base;
    }
    else
    {
        for(int i = p_Id; i < (this->count() - 1); i++)
        {
            m_Vector[i] = m_Vector[i + 1];
        }
        m_Count--;
        m_Vector[m_Count] = m_Base;
    }    
}

template<class T, int N>
T& Vector<T, N>::selectOne()
{
    // Assert isfull = true
    return m_Vector[m_Count++];
}

template<class T, int N>
bool Vector<T, N>::isEmpty() const
{
    return (0 == m_Count);
}

template<class T, int N>
bool Vector<T, N>::isFull() const
{
    return (m_Count == N);
}

template<class T, int N>
void Vector<T, N>::clear_all()
{
    for(int i = 0; i < m_Count; i++)
    {
        m_Vector[i] = m_Base;
    }
    m_Count = 0;
}

template<class T, int N>
const char* Vector<T, N>::get_types()
{
    return typeid(T).name();
}
