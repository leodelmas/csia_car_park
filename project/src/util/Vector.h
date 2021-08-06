///////////////////////////////////////////////////////////
//  Author: Sorlin Sylvain
//  Class: Brand
//  Brief: Header file
///////////////////////////////////////////////////////////

template <class T, int N>
class Vector
{

public:
    Vector();

    ~Vector();

    T & operator[](const int& p_Id);

    const T & operator[](const int& p_Id) const;

    /**
     * Renvoie la taille du max vecteur
     */ 
    static int size();

    /**
     * Renvoie le nombre d'objet dans le vecteur
     */ 
    int count() const;

    void delette(const int& p_Id);

    void add(const int& p_Id, const T& p_Value);

    void add(const T& p_Value);

    bool isEmpty() const;

    bool isFull() const;

    void clear_all();

private:
    T m_Vector[N];
    int m_Count;
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

    for(int i = p_Id; i < (this->count() - 1); i++)
    {
        m_Vector[i] = m_Vector[i + 1];
    }
    m_Count--;
}

template<class T, int N>
void Vector<T, N>::add(const int& p_Id, const T& p_Value)
{
    // Assert si p_Id > count()
    // Assert si p_Id < size

    for(int i = this->count(); i > p_Id; i--)
    {
        m_Vector[i] = m_Vector[i - 1];
    }
    m_Vector[p_Id] = p_Value;
    m_Count++;
}

template<class T, int N>
void Vector<T, N>::add(const T& p_Value)
{
    // Assert si isfull == true
    m_Vector[m_Count] = p_Value;
    m_Count++;
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
    m_Count = 0;
}